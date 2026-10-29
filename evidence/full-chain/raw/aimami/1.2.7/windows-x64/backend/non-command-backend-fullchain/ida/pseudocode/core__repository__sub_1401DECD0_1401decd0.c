// win 1.2.7 | module src/core/repository.rs | ea 0x1401decd0 | name sub_1401DECD0
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401DECD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // edx
  __int64 result; // rax
  _DWORD v11[2]; // [rsp+20h] [rbp-78h] BYREF
  int v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13[13]; // [rsp+30h] [rbp-68h] BYREF

  sub_141695A00(&v12, a2, a3);
  if ( v12 != 2 )
    return sub_1401C7E40(a1, a2, a3);
  v7 = v13[0] & 3;
  v8 = (unsigned int)(v7 - 2);
  if ( (unsigned int)v8 >= 2 && (v13[0] & 3) != 0 )
  {
    --v13[0];
    LOBYTE(v12) = 3;
    sub_1416BCB00(v13);
  }
  v11[0] = sub_141683E80(v7, v8, v6);
  v11[1] = v9;
  sub_141683E30(&v12, v11, 3577643008LL, 27111902);
  if ( (_BYTE)v12 )
    result = 0;
  else
    result = v13[0];
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = -1;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = 15;
  *(_DWORD *)(a1 + 68) = 10;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = result;
  *(_DWORD *)(a1 + 88) = 4;
  *(_BYTE *)(a1 + 92) = 1;
  *(_QWORD *)a1 = -1;
  return result;
}
