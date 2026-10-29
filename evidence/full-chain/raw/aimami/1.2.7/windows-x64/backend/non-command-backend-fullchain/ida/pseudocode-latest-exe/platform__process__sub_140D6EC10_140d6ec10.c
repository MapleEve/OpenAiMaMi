// win 1.2.7 latest-exe | module src/platform/process.rs | ea 0x140d6ec10 | successor of pre-update 0x141041190 | session <审计会话>
// match evidence: {"body_sim": 0.741, "str_ov": 0, "anchor": 0.407, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140D6EC10(__int64 a1, DWORD a2)
{
  HANDLE v3; // rax
  void *v4; // rbx
  BOOL v5; // r14d
  __int128 v7; // xmm0
  WCHAR ExeName[1024]; // [rsp+20h] [rbp-60h] BYREF
  WCHAR *v9; // [rsp+820h] [rbp+7A0h] BYREF
  WCHAR *v10; // [rsp+828h] [rbp+7A8h] BYREF
  __int16 v11; // [rsp+830h] [rbp+7B0h]
  __int128 v12; // [rsp+878h] [rbp+7F8h] BYREF
  __int128 v13; // [rsp+888h] [rbp+808h]
  __int64 v14; // [rsp+898h] [rbp+818h]
  DWORD dwSize; // [rsp+8A4h] [rbp+824h] BYREF
  __int64 v16; // [rsp+8A8h] [rbp+828h]

  v16 = -2;
  v3 = OpenProcess(0x1000u, 0, a2);
  if ( v3
    && (v4 = v3,
        sub_141923C40(ExeName, 0, 2048),
        dwSize = 1024,
        v5 = QueryFullProcessImageNameW(v4, 0, ExeName, &dwSize),
        CloseHandle(v4),
        v5)
    && dwSize )
  {
    if ( dwSize >= 0x401 )
      sub_14196B880(0, dwSize, 1024, &off_141A98E78);
    v9 = ExeName;
    v10 = &ExeName[dwSize];
    v11 = 0;
    sub_1401D1930(&v12, &v9);
    BYTE8(v13) = 1;
    v14 = *((_QWORD *)&v12 + 1);
    sub_1416C49D0(&v9, *((_QWORD *)&v12 + 1), v13);
    if ( (_DWORD)v9 == 2 )
    {
      if ( ((unsigned __int8)v10 & 3u) - 2 >= 2 && ((unsigned __int8)v10 & 3) != 0 )
      {
        v10 = (WCHAR *)((char *)v10 - 1);
        LOBYTE(v9) = 3;
        sub_1416EBAD0(&v10);
      }
      *(_QWORD *)a1 = -1;
      if ( (_QWORD)v12 )
        sub_140001660(v14, v12, 1);
    }
    else
    {
      v7 = v12;
      *(_OWORD *)(a1 + 16) = v13;
      *(_OWORD *)a1 = v7;
    }
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return a1;
}
