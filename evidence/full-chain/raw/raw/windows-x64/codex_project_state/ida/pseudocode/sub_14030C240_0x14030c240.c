/*
 * owner-map: module=core::relay::codex_project_state tier=C evidence=panic-location-2hop
 * addr=0x14030c240 size=0x475 name=sub_14030C240
 * source: AiMaMi 1.2.3 windows-x64 stripped binary, IDA Hex-Rays decompile via idacall.py MCP
 * truncated_chunked=False
 */

/* refs (callees/data used):
 *  0x140324fc0  sub_140324FC0
 *  0x14057c820  sub_14057C820
 *  0x140001690  nullsub_1
 *  0x140001650  sub_140001650
 *  0x1416c2d4b  sub_1416C2D4B
 *  0x1402c2d60  sub_1402C2D60
 *  0x14042b0e0  sub_14042B0E0
 *  0x141688d30  sub_141688D30
 */

// win 1.2.1 | module src/core/relay/codex_project_state.rs | attributed via panic-Location xref (win-native)
_OWORD *__fastcall sub_14030C240(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v16[56]; // [rsp+38h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp-8h]
  __int128 v19; // [rsp+80h] [rbp+0h]
  __int128 v20; // [rsp+90h] [rbp+10h]
  __int128 v21; // [rsp+A0h] [rbp+20h]
  __int64 *v22; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+38h]
  __int64 v24; // [rsp+C0h] [rbp+40h]
  __int128 v25; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+58h]
  __int128 v27; // [rsp+E0h] [rbp+60h]
  __int128 v28; // [rsp+F0h] [rbp+70h]
  __int128 v29; // [rsp+100h] [rbp+80h]
  __int64 v30; // [rsp+110h] [rbp+90h]
  __int64 v31; // [rsp+118h] [rbp+98h]
  __int128 v32; // [rsp+120h] [rbp+A0h] BYREF
  char v33; // [rsp+130h] [rbp+B0h] BYREF
  _QWORD *v34; // [rsp+138h] [rbp+B8h]
  __int128 v35; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v36; // [rsp+150h] [rbp+D0h] BYREF
  char v37; // [rsp+15Fh] [rbp+DFh]
  __int64 v38; // [rsp+160h] [rbp+E0h]

  v38 = -2; /*0x14030c25b*/
  v34 = a1; /*0x14030c266*/
  *(_QWORD *)&v32 = a2; /*0x14030c26d*/
  *((_QWORD *)&v32 + 1) = a3; /*0x14030c274*/
  *(_QWORD *)&v35 = &v33; /*0x14030c282*/
  while ( 1 ) /*0x14030c2b0*/
  {
    v37 = 1; /*0x14030c2b0*/
    sub_140324FC0(&v17, &v32); /*0x14030c2bd*/
    v3 = v17; /*0x14030c2c3*/
    if ( v17 == -1 ) /*0x14030c2cb*/
      break; /*0x14030c2cb*/
    *(_OWORD *)&v16[40] = v21; /*0x14030c2e0*/
    *(_OWORD *)&v16[24] = v20; /*0x14030c2e5*/
    *(_OWORD *)&v16[8] = v19; /*0x14030c2ea*/
    v15 = v17; /*0x14030c2ee*/
    *(_QWORD *)v16 = v18; /*0x14030c2f2*/
    v27 = *(_OWORD *)v16; /*0x14030c305*/
    v28 = *(_OWORD *)&v16[16]; /*0x14030c309*/
    v29 = *(_OWORD *)&v16[32]; /*0x14030c30d*/
    v30 = *((_QWORD *)&v21 + 1); /*0x14030c318*/
LABEL_6:
    *(_QWORD *)&v16[48] = v30; /*0x14030c395*/
    *(_OWORD *)&v16[32] = v29; /*0x14030c3af*/
    *(_OWORD *)&v16[16] = v28; /*0x14030c3b4*/
    *(_OWORD *)v16 = v27; /*0x14030c3b9*/
    v15 = v3; /*0x14030c3be*/
    v37 = 1; /*0x14030c3c2*/
    sub_14057C820(&v17, &v35, &v15); /*0x14030c3d2*/
    if ( v17 != -1 ) /*0x14030c3e0*/
    {
      v36 = v17; /*0x14030c3e6*/
      v5 = v18; /*0x14030c3ed*/
      v6 = v19; /*0x14030c3f1*/
      nullsub_1(v4); /*0x14030c3f5*/
      v7 = (__int64 *)sub_140001650(96, 8); /*0x14030c404*/
      if ( !v7 ) /*0x14030c40c*/
      {
        v34 = v5; /*0x14030c69c*/
        sub_1416C2D4B(8, 96); /*0x14030c6ad*/
      }
      v8 = v7; /*0x14030c412*/
      *v7 = v36; /*0x14030c41c*/
      v7[1] = (__int64)v5; /*0x14030c41f*/
      v7[2] = v6; /*0x14030c423*/
      *(_QWORD *)&v25 = 4; /*0x14030c427*/
      *((_QWORD *)&v25 + 1) = v7; /*0x14030c42f*/
      v26 = 1; /*0x14030c433*/
      v35 = v32; /*0x14030c442*/
      v36 = 1; /*0x14030c455*/
LABEL_10:
      v22 = &v36; /*0x14030c4b6*/
      while ( 1 ) /*0x14030c4c6*/
      {
        sub_140324FC0(&v17, &v35); /*0x14030c4c6*/
        v10 = v17; /*0x14030c4cc*/
        if ( v17 == -1 ) /*0x14030c4d4*/
        {
          if ( !*((_QWORD *)&v35 + 1) /*0x14030c58c*/
            || (sub_14042B0E0(&v15, (char *)&v35 + 8, 1),
                v10 = v15,
                v27 = *(_OWORD *)v16,
                v28 = *(_OWORD *)&v16[16],
                v29 = *(_OWORD *)&v16[32],
                v30 = *(_QWORD *)&v16[48],
                v15 == -2) )
          {
            sub_1402C2D60(&v35); /*0x14030c63a*/
            v12 = v34; /*0x14030c644*/
            v34[2] = v26; /*0x14030c64b*/
            *v12 = v25; /*0x14030c656*/
            return v12; /*0x14030c659*/
          }
        }
        else
        {
          *(_OWORD *)&v16[40] = v21; /*0x14030c4e9*/
          *(_OWORD *)&v16[24] = v20; /*0x14030c4ee*/
          *(_OWORD *)&v16[8] = v19; /*0x14030c4f3*/
          v15 = v17; /*0x14030c4f7*/
          *(_QWORD *)v16 = v18; /*0x14030c4fb*/
          v27 = *(_OWORD *)v16; /*0x14030c50e*/
          v28 = *(_OWORD *)&v16[16]; /*0x14030c512*/
          v29 = *(_OWORD *)&v16[32]; /*0x14030c516*/
          v30 = *((_QWORD *)&v21 + 1); /*0x14030c521*/
        }
        *(_QWORD *)&v16[48] = v30; /*0x14030c599*/
        *(_OWORD *)&v16[32] = v29; /*0x14030c5ac*/
        *(_OWORD *)&v16[16] = v28; /*0x14030c5b1*/
        *(_OWORD *)v16 = v27; /*0x14030c5b6*/
        v15 = v10; /*0x14030c5bb*/
        sub_14057C820(&v17, &v22, &v15); /*0x14030c5c8*/
        if ( v17 != -1 ) /*0x14030c5d6*/
        {
          v31 = v17; /*0x14030c5dc*/
          v24 = (__int64)v18; /*0x14030c5e7*/
          v23 = v19; /*0x14030c5ef*/
          v11 = v36; /*0x14030c5f3*/
          if ( v36 == (_QWORD)v25 ) /*0x14030c5fe*/
          {
            sub_141688D30((unsigned int)&v25, v36, 1, 8, 24); /*0x14030c61d*/
            v8 = *((__int64 **)&v25 + 1); /*0x14030c623*/
            v11 = v36; /*0x14030c627*/
          }
          v9 = 3 * v11; /*0x14030c480*/
          v8[v9] = v31; /*0x14030c48b*/
          v8[v9 + 1] = v24; /*0x14030c493*/
          v8[v9 + 2] = v23; /*0x14030c49c*/
          v36 = v11 + 1; /*0x14030c4a4*/
          v26 = v11 + 1; /*0x14030c4ab*/
          goto LABEL_10; /*0x14030c4ab*/
        }
      }
    }
  }
  if ( *((_QWORD *)&v32 + 1) ) /*0x14030c338*/
  {
    v37 = 1; /*0x14030c33e*/
    sub_14042B0E0(&v15, (char *)&v32 + 8, 1); /*0x14030c358*/
    v3 = v15; /*0x14030c35e*/
    v27 = *(_OWORD *)v16; /*0x14030c371*/
    v28 = *(_OWORD *)&v16[16]; /*0x14030c375*/
    v29 = *(_OWORD *)&v16[32]; /*0x14030c379*/
    v30 = *(_QWORD *)&v16[48]; /*0x14030c384*/
    if ( v15 != -2 ) /*0x14030c38f*/
      goto LABEL_6; /*0x14030c38f*/
  }
  v14 = v34; /*0x14030c65b*/
  *v34 = 0; /*0x14030c662*/
  v14[1] = 8; /*0x14030c669*/
  v14[2] = 0; /*0x14030c671*/
  sub_1402C2D60(&v32); /*0x14030c680*/
  return v14; /*0x14030c688*/
}
