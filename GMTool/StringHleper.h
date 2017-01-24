#pragma once

LPCTSTR GB2Big(char*  sGb)
{
	char*  pszGbt = NULL;
	char*  pszGbs = NULL;
	wchar_t*  wszUnicode = NULL;
	char*  pszBig5 = NULL;
	LPCTSTR  sBig5;
	int  iLen = 0;

	pszGbs = sGb;
	iLen = MultiByteToWideChar(936, 0, pszGbs, -1, NULL, 0);
	pszGbt = new  char[iLen * 2 + 1];
	LCMapString(0x0804, LCMAP_TRADITIONAL_CHINESE, pszGbs, -1, pszGbt, iLen * 2);
	wszUnicode = new  wchar_t[iLen + 1];
	MultiByteToWideChar(936, 0, pszGbt, -1, wszUnicode, iLen);
	iLen = WideCharToMultiByte(950, 0, (PWSTR)wszUnicode, -1, NULL, 0, NULL, NULL);
	pszBig5 = new  char[iLen + 1];
	WideCharToMultiByte(950, 0, (PWSTR)wszUnicode, -1, pszBig5, iLen, NULL, NULL);
	sBig5 = pszBig5;
	delete[]  wszUnicode;
	wszUnicode = NULL;
	delete[]  pszGbt;
	pszGbt = NULL;
	delete[]  pszBig5;
	pszBig5 = NULL;

	return  sBig5;
}

LPCTSTR Big2GB(char*  sBig5)
{
	// TODO: Add your control notification handler code here
	char buf[2048];
	char GbBuf[2048];
	WCHAR wbuf[2048];

	LPCTSTR  sRetBig5;

	ZeroMemory(buf, sizeof(buf));
	ZeroMemory(GbBuf, sizeof(GbBuf));
	ZeroMemory(wbuf, sizeof(wbuf));
	MultiByteToWideChar(950, 0, sBig5, -1, wbuf, 2046);

	//转换Unicode码到Gb码繁体，使用API函数WideCharToMultiByte
	WideCharToMultiByte(936, 0, wbuf, -1, buf, sizeof(buf), NULL, NULL);

	//转换Gb码繁体到Gb码简体，使用API函数LCMapString
	LCMapString(0x0804, LCMAP_SIMPLIFIED_CHINESE, buf, -1, GbBuf, 2048);

	sRetBig5 = GbBuf;
	return  sRetBig5;
}

TCHAR convert(int n)
{
	static TCHAR str;
	if (n < 10)
	{
		str = (char)(n % 10 + '0');
		return str;
	}
	else
	{
		str = convert(n / 10) + (char)(n % 10 + '0');
		return str;
	}
}
