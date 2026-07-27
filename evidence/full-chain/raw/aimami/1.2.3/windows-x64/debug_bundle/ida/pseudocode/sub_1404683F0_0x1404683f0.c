// module: codexmate_lib/core/debug_bundle
// addr: 0x1404683f0
// name: sub_1404683F0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404683F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r12
  __int128 v10; // kr00_16
  __int64 v11; // rcx
  __int64 v12; // rdi
  _OWORD v14[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  _OWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+78h] [rbp-8h]
  __int128 v19; // [rsp+80h] [rbp+0h] BYREF
  __int64 v20; // [rsp+90h] [rbp+10h]
  __int64 v21; // [rsp+98h] [rbp+18h]

  v21 = -2;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  sub_141434D30(v16, 1, v4);
  if ( *(_QWORD *)&v16[0] == -1 )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&v16[0] + 1);
    *(_BYTE *)a1 = -1;
  }
  else
  {
    v20 = *(_QWORD *)&v16[1];
    v19 = v16[0];
    if ( v4 )
    {
      v5 = v3 + 32 * v4;
      while ( 1 )
      {
        sub_140445480(v14, v3);
        if ( LOBYTE(v14[0]) == 0xFF )
          break;
        v9 = v20;
        if ( v20 == (_QWORD)v19 )
          sub_1416890A0(&v19);
        v3 += 32;
        v6 = *((_QWORD *)&v19 + 1);
        v7 = 32 * v9;
        v8 = v14[0];
        *(_OWORD *)(*((_QWORD *)&v19 + 1) + v7 + 16) = v14[1];
        *(_OWORD *)(v6 + v7) = v8;
        v20 = v9 + 1;
        if ( v3 == v5 )
          goto LABEL_8;
      }
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v14[0] + 1);
      *(_BYTE *)a1 = -1;
      v11 = *((_QWORD *)&v19 + 1);
      v17 = v20;
      v18 = 0;
      v15 = *((_QWORD *)&v19 + 1);
      while ( v17 != v18 )
      {
        ++v18;
        v12 = v11 + 32;
        sub_1402C3260();
        v11 = v12;
      }
      if ( (_QWORD)v19 )
        sub_140001660(*((_QWORD *)&v19 + 1), 32 * v19, 8);
    }
    else
    {
LABEL_8:
      *(_QWORD *)((char *)&v16[1] + 7) = v20;
      *(_OWORD *)((char *)v16 + 7) = v19;
      *(_BYTE *)a1 = 4;
      v10 = *(_OWORD *)((char *)v16 + 15);
      *(_OWORD *)(a1 + 1) = v16[0];
      *(_OWORD *)(a1 + 16) = v10;
    }
  }
  return a1;
}