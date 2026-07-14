// get_codex_router_auth_readiness_owner_sys @ 0x140024b90 size=431 proto=__int64 __fastcall(__int64, _QWORD *)
// owner for get_codex_router_auth_readiness; session <审计会话>; not gate promotion
__int64 __fastcall get_codex_router_auth_readiness_owner_sys(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _WORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _WORD *v11; // r14
  _DWORD *v12; // rax
  _OWORD v14[21]; // [rsp+20h] [rbp-60h] BYREF
  char v15; // [rsp+175h] [rbp+F5h]
  _WORD *v16; // [rsp+180h] [rbp+100h]
  _QWORD v17[2]; // [rsp+188h] [rbp+108h] BYREF
  __int128 v18; // [rsp+198h] [rbp+118h]
  __int64 v19; // [rsp+1A8h] [rbp+128h]
  __int64 v20; // [rsp+1B0h] [rbp+130h]
  __int64 v21; // [rsp+1B8h] [rbp+138h]

  v21 = -2; /*0x140024ba5*/
  router_unlock_auth_readiness_core_sys(v17, *a2 + 16LL); /*0x140024bc4*/
  sub_14027BE60((__int64)v14, (__int64)a2); /*0x140024bd1*/
  if ( v15 ) /*0x140024bde*/
  {
    sub_14004A000(v14); /*0x140024be4*/
    BYTE9(v18) = 1; /*0x140024bea*/
  }
  else
  {
    sub_14004A000(v14); /*0x140024bf7*/
  }
  v6 = v17[0]; /*0x140024bfd*/
  v7 = v17[1]; /*0x140024c04*/
  v14[0] = v18; /*0x140024c12*/
  nullsub_1(v5, v4); /*0x140024c3e*/
  v8 = (_WORD *)sub_140001360(2, 1); /*0x140024c4d*/
  if ( !v8 ) /*0x140024c55*/
  {
    v19 = v7; /*0x140024cf8*/
    v20 = v6; /*0x140024cff*/
    sub_1412AD46B(1, 2); /*0x140024d10*/
  }
  v11 = v8; /*0x140024c5b*/
  *v8 = 27503; /*0x140024c5e*/
  nullsub_1(v10, v9); /*0x140024c63*/
  v12 = (_DWORD *)sub_140001360(7, 1); /*0x140024c72*/
  if ( !v12 ) /*0x140024c7a*/
  {
    v16 = v11; /*0x140024d18*/
    v19 = v7; /*0x140024d1f*/
    v20 = v6; /*0x140024d26*/
    sub_1412AD46B(1, 7); /*0x140024d37*/
  }
  *(_DWORD *)((char *)v12 + 3) = 1936942435; /*0x140024c80*/
  *v12 = 1667462483; /*0x140024c87*/
  *(_QWORD *)(a1 + 72) = v6; /*0x140024c8d*/
  *(_QWORD *)(a1 + 80) = v7; /*0x140024c91*/
  *(_OWORD *)(a1 + 88) = v14[0]; /*0x140024c99*/
  *(_QWORD *)a1 = 2; /*0x140024c9d*/
  *(_QWORD *)(a1 + 8) = v11; /*0x140024ca4*/
  *(_QWORD *)(a1 + 16) = 2; /*0x140024ca8*/
  *(_QWORD *)(a1 + 24) = 7; /*0x140024cb0*/
  *(_QWORD *)(a1 + 32) = v12; /*0x140024cb8*/
  *(_QWORD *)(a1 + 40) = 7; /*0x140024cbc*/
  *(_QWORD *)(a1 + 48) = 0; /*0x140024cc4*/
  *(_QWORD *)(a1 + 56) = 8; /*0x140024ccc*/
  *(_QWORD *)(a1 + 64) = 0; /*0x140024cd4*/
  *(_DWORD *)(a1 + 104) = 1; /*0x140024cdc*/
  *(_BYTE *)(a1 + 108) = 1; /*0x140024ce3*/
  return a1; /*0x140024cea*/
}