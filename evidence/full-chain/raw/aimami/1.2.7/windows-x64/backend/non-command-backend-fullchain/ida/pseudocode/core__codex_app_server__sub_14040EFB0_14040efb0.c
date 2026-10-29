// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x14040efb0 | name sub_14040EFB0
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14040EFB0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int128 v8; // kr00_16
  _OWORD v9[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int128 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h]
  __int64 v14; // [rsp+80h] [rbp+0h]

  v14 = -2;
  sub_14163FFC0(v9, 10);
  if ( *(_QWORD *)&v9[0] == -1 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v9[0] + 1);
    *(_BYTE *)a1 = -1;
  }
  else
  {
    v13 = *(_QWORD *)&v9[1];
    v12 = v9[0];
    v4 = sub_140BE6F70(&v12, a2);
    if ( v4 )
      goto LABEL_12;
    v4 = sub_140BE6F70(&v12, a2 + 16);
    if ( v4 )
      goto LABEL_12;
    v4 = sub_140BE6F70(&v12, a2 + 32);
    if ( v4
      || (v4 = sub_140BE6F70(&v12, a2 + 48)) != 0
      || (v4 = sub_140BE6F70(&v12, a2 + 64)) != 0
      || (v4 = sub_140BE6F70(&v12, a2 + 80)) != 0
      || (v4 = sub_140BE6F70(&v12, a2 + 96)) != 0
      || (v4 = sub_140BE6F70(&v12, a2 + 112)) != 0
      || (v4 = sub_140BE6F70(&v12, a2 + 128)) != 0
      || (v4 = sub_140BE6F70(&v12, a2 + 144)) != 0 )
    {
LABEL_12:
      *(_QWORD *)(a1 + 8) = v4;
      *(_BYTE *)a1 = -1;
      v5 = *((_QWORD *)&v12 + 1);
      v10 = v13;
      v11 = 0;
      while ( v10 != v11 )
      {
        ++v11;
        v6 = v5 + 32;
        sub_1403880E0(v5);
        v5 = v6;
      }
      if ( (_QWORD)v12 )
        sub_140001660(*((_QWORD *)&v12 + 1), 32 * v12, 8);
    }
    else
    {
      *(_QWORD *)((char *)&v9[1] + 7) = v13;
      *(_OWORD *)((char *)v9 + 7) = v12;
      *(_BYTE *)a1 = 4;
      v8 = *(_OWORD *)((char *)v9 + 15);
      *(_OWORD *)(a1 + 1) = v9[0];
      *(_OWORD *)(a1 + 16) = v8;
    }
  }
  return a1;
}
