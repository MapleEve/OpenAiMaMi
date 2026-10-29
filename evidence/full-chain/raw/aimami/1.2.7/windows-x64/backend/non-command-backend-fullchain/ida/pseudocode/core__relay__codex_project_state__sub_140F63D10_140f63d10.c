// win 1.2.7 | module src/core/relay/codex_project_state.rs | ea 0x140f63d10 | name sub_140F63D10
// win 1.2.7 | module src/core/relay/codex_project_state.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F63D10(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD v11[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-38h]
  _BYTE v14[72]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v16; // [rsp+B0h] [rbp+30h]
  __int128 v17; // [rsp+C0h] [rbp+40h]
  __int128 v18; // [rsp+D0h] [rbp+50h]
  __int64 v19; // [rsp+E8h] [rbp+68h]
  __int64 v20; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v22; // [rsp+100h] [rbp+80h]
  char v23; // [rsp+10Eh] [rbp+8Eh] BYREF
  char v24; // [rsp+10Fh] [rbp+8Fh]
  __int64 v25; // [rsp+110h] [rbp+90h]

  v25 = -2;
  v11[0] = aThreads_6;
  v11[1] = 7;
  *(_QWORD *)v14 = v11;
  *(_QWORD *)&v14[8] = sub_140186EE0;
  sub_1416ABFD0(&v20, &unk_141A62C94, v14);
  v19 = v21;
  sub_140EC0780(v14, a2, v21, v22);
  result = *(unsigned int *)v14;
  v15 = *(_OWORD *)&v14[8];
  v16 = *(_OWORD *)&v14[24];
  v17 = *(_OWORD *)&v14[40];
  v18 = *(_OWORD *)&v14[56];
  if ( *(_DWORD *)v14 == 1 )
  {
    v5 = v15;
    v6 = v16;
    v7 = v17;
    *(_OWORD *)(a1 + 48) = v18;
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    if ( v20 )
      return sub_140001660(v19, v20, 1);
  }
  else
  {
    *(_OWORD *)&v14[48] = v18;
    *(_OWORD *)&v14[32] = v17;
    *(_OWORD *)&v14[16] = v16;
    *(_OWORD *)v14 = v15;
    if ( v20 )
      sub_140001660(v19, v20, 1);
    v8 = sub_1417A9630(*(_QWORD *)&v14[56]);
    if ( v8 )
    {
      *(_QWORD *)a1 = 0x8000000000000013uLL;
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = v8;
    }
    else
    {
      sub_1403C9960(&v20, (__int64)v14, 0);
      v9 = v22;
      if ( v22 )
      {
        v10 = v21;
        if ( v22 != 1 )
        {
          if ( v22 >= 0x15 )
          {
            v24 = 1;
            sub_1415584D0(v21, v22, &v23);
          }
          else
          {
            sub_140DFF490(v21, v22, 1, &v23);
          }
        }
        *(_QWORD *)&v15 = v10;
        *((_QWORD *)&v15 + 1) = v10;
        *(_QWORD *)&v16 = v20;
        *((_QWORD *)&v16 + 1) = v10 + 24 * v9;
        v24 = 0;
        sub_140DEBCF0(v12, &v15);
      }
      else
      {
        v12[0] = 0;
        v13 = 0;
        if ( v20 )
          sub_140001660(v21, 24 * v20, 8);
      }
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 8) = v12[0];
      *(_QWORD *)(a1 + 16) = v12[1];
      *(_QWORD *)a1 = -1;
    }
    return sub_140E970D0(v14);
  }
  return result;
}
