// win 1.2.7 | module src/core/relay/codex_catalog.rs | ea 0x14101f5f0 | name sub_14101F5F0
// win 1.2.7 | module src/core/relay/codex_catalog.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14101F5F0(__int64 a1)
{
  __m128 v1; // xmm0
  __int64 result; // rax
  __int128 v4; // xmm6
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-58h] BYREF
  __int128 v9; // [rsp+30h] [rbp-50h]
  unsigned __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-8h]
  __int64 v13; // [rsp+80h] [rbp+0h]
  __int64 v14; // [rsp+88h] [rbp+8h]

  v14 = -2;
  sub_140EE5860(&v7);
  result = v7;
  if ( v7 == -1 )
  {
    *(_QWORD *)a1 = 2;
  }
  else
  {
    v13 = v7;
    v4 = v9;
    v12 = v8;
    sub_141695A00(&v7, v8, v9);
    if ( (_DWORD)v7 == 2 )
    {
      v5 = (unsigned int)(v8 & 3) - 2;
      if ( (unsigned int)v5 >= 2 && (v8 & 3) != 0 )
      {
        --v8;
        LOBYTE(v7) = 3;
        sub_1416BCB00(&v8);
      }
      v6 = 0;
      result = 0;
    }
    else
    {
      v1 = (__m128)v10;
      v5 = v11;
      result = 1;
      v6 = 1;
    }
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v13;
    *(_QWORD *)(a1 + 24) = v12;
    *(_OWORD *)(a1 + 32) = v4;
    *(_DWORD *)(a1 + 48) = result;
    _mm_storel_ps((double *)(a1 + 52), v1);
  }
  return result;
}
