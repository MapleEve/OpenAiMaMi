// win 1.2.7 | module src/core/relay/manager.rs | ea 0x1410261e0 | name sub_1410261E0
// win 1.2.7 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1410261E0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rbx
  bool v8; // bp
  __int128 v10; // [rsp+20h] [rbp-A8h]
  __int128 v11; // [rsp+30h] [rbp-98h]
  __int64 v12; // [rsp+48h] [rbp-80h] BYREF
  __int64 v13; // [rsp+50h] [rbp-78h]
  __int64 v14; // [rsp+58h] [rbp-70h]
  __int64 v15; // [rsp+60h] [rbp-68h]
  __int64 v16; // [rsp+68h] [rbp-60h]
  __int64 v17; // [rsp+70h] [rbp-58h]
  __int128 v18; // [rsp+78h] [rbp-50h]
  __int128 v19; // [rsp+88h] [rbp-40h]
  __int128 v20; // [rsp+98h] [rbp-30h]

  sub_1410257E0(&v12);
  v2 = v12;
  v3 = v13;
  v4 = v14;
  v5 = v15;
  v6 = v16;
  v7 = v17;
  if ( v12 == -1 )
  {
    if ( v13 == -1 )
    {
      v8 = 0;
LABEL_12:
      *(_BYTE *)(a1 + 8) = v8;
      *(_QWORD *)a1 = -1;
      return a1;
    }
    if ( v15 == 10 )
    {
      v8 = (*(_QWORD *)v14 ^ 0x697474696D6D6F63LL | *(unsigned __int16 *)(v14 + 8) ^ 0x676ELL) == 0;
      if ( !v13 )
      {
LABEL_10:
        if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v7, v6, 1);
        goto LABEL_12;
      }
    }
    else
    {
      v8 = 0;
      if ( !v13 )
        goto LABEL_10;
    }
    sub_140001660(v14, v13, 1);
    goto LABEL_10;
  }
  v11 = v19;
  v10 = v18;
  *(_OWORD *)(a1 + 80) = v20;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v7;
  *(_OWORD *)(a1 + 48) = v10;
  *(_OWORD *)(a1 + 64) = v11;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
