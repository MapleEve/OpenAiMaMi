// win 1.2.7 | module src/platform/process.rs | ea 0x141041190 | name sub_141041190
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_141041190(__int64 a1, DWORD a2)
{
  HANDLE v3; // rax
  void *v4; // rbx
  BOOL v5; // r14d
  __int64 v6; // rdi
  WCHAR ExeName[1024]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v9[2]; // [rsp+830h] [rbp+7B0h] BYREF
  __int16 v10; // [rsp+840h] [rbp+7C0h]
  __int64 v11; // [rsp+848h] [rbp+7C8h] BYREF
  __int64 v12; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v13; // [rsp+858h] [rbp+7D8h]
  __int64 v14; // [rsp+8A0h] [rbp+820h]
  __int64 v15; // [rsp+8A8h] [rbp+828h]
  DWORD dwSize; // [rsp+8B4h] [rbp+834h] BYREF
  __int64 v17; // [rsp+8B8h] [rbp+838h]

  v17 = -2;
  v3 = OpenProcess(0x1000u, 0, a2);
  if ( v3
    && (v4 = v3,
        sub_1418F4C70(ExeName, 0, 2048),
        dwSize = 1024,
        v5 = QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize),
        CloseHandle(v4),
        v5)
    && dwSize )
  {
    if ( dwSize >= 0x401 )
      sub_1419392D0(0, dwSize, 1024, &off_141A71B68);
    v9[0] = ExeName;
    v9[1] = &ExeName[dwSize];
    v10 = 0;
    v11 = 0;
    v12 = 1;
    v13 = 0;
    sub_14190D590((unsigned int)&v11, 0, dwSize - (dwSize >> 1), 1, 1);
    sub_1402A72A0(v9, &v11);
    v15 = v11;
    v6 = v13;
    v14 = v12;
    sub_141695A00(&v11, v12, v13);
    if ( (_DWORD)v11 == 2 )
    {
      if ( (unsigned int)(v12 & 3) - 2 >= 2 && (v12 & 3) != 0 )
      {
        --v12;
        LOBYTE(v11) = 3;
        sub_1416BCB00(&v12);
      }
      *(_QWORD *)a1 = -1;
      if ( v15 )
        sub_140001660(v14, v15, 1);
    }
    else
    {
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v14;
      *(_QWORD *)(a1 + 16) = v6;
      *(_BYTE *)(a1 + 24) = 1;
    }
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return a1;
}
