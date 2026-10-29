// win 1.2.7 | module src/platform/paths.rs | ea 0x140e93000 | name sub_140E93000
// win 1.2.7 | module src/platform/paths.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E93000(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD v10[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v11; // [rsp+30h] [rbp-50h]
  __int128 v12; // [rsp+40h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-30h]
  __int128 v14; // [rsp+60h] [rbp-20h]
  __int128 v15; // [rsp+70h] [rbp-10h]
  __int128 v16; // [rsp+80h] [rbp+0h]
  __int64 v17; // [rsp+98h] [rbp+18h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp+20h] BYREF

  v18[1] = -2;
  v4 = sub_1417A9630(*(_QWORD *)(a2 + 56));
  if ( !v4 )
  {
    v17 = a2;
    v18[0] = 0;
    sub_140F9AB20(v10, &v17);
    v5 = v10[0];
    if ( v10[0] == -1 )
    {
      v6 = v18;
      if ( v18[0] )
      {
        sub_14018EA70(a1, v18, 0, &off_141A57120);
        goto LABEL_8;
      }
      v5 = 0x8000000000000009uLL;
    }
    else
    {
      v6 = (_QWORD *)v10[1];
      v14 = v11;
      v15 = v12;
      v16 = v13;
    }
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v6;
    v7 = v15;
    v8 = v16;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 48) = v8;
LABEL_8:
    sub_140E96D30(&v17);
    return a1;
  }
  *(_QWORD *)a1 = 0x8000000000000013uLL;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = v4;
  return a1;
}
