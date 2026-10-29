// win 1.2.7 | module src/core/voice/runtime/mod.rs | ea 0x140c96cc0 | name sub_140C96CC0
// win 1.2.7 | module src/core/voice/runtime/mod.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140C96CC0(__int64 a1)
{
  void *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int128 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int128 v25; // [rsp+40h] [rbp-40h]
  void *v26; // [rsp+58h] [rbp-28h]
  _QWORD *v27; // [rsp+60h] [rbp-20h]
  _QWORD *v28; // [rsp+68h] [rbp-18h]
  _QWORD *v29; // [rsp+70h] [rbp-10h]
  _DWORD *v30; // [rsp+78h] [rbp-8h]
  _DWORD *v31; // [rsp+80h] [rbp+0h]

  nullsub_1(a1);
  v2 = (void *)sub_140001650(15, 1);
  if ( !v2 )
    sub_141938D2B(1, 15);
  v26 = v2;
  qmemcpy(v2, "Cmd+Shift+Space", 15);
  nullsub_1(0x666968532B646D43LL);
  v3 = (_QWORD *)sub_140001650(8, 1);
  if ( !v3 )
    sub_141938D2B(1, 8);
  v27 = v3;
  *v3 = 0x7265696669646F6DLL;
  nullsub_1(v4);
  v5 = (_QWORD *)sub_140001650(8, 1);
  if ( !v5 )
    sub_141938D2B(1, 8);
  v28 = v5;
  *v5 = 0x7265696669646F6DLL;
  nullsub_1(v6);
  v7 = (_QWORD *)sub_140001650(8, 1);
  if ( !v7 )
    sub_141938D2B(1, 8);
  v29 = v7;
  *v7 = 0x7265696669646F6DLL;
  nullsub_1(v8);
  v9 = (_DWORD *)sub_140001650(4, 1);
  if ( !v9 )
    sub_141938D2B(1, 4);
  v30 = v9;
  *v9 = 1869903201;
  nullsub_1(v10);
  v11 = (_DWORD *)sub_140001650(4, 1);
  if ( !v11 )
    sub_141938D2B(1, 4);
  v31 = v11;
  *v11 = 1802723700;
  v13 = sub_14167F170(v12);
  v18 = v13;
  if ( *(_BYTE *)(v13 + 16) == 1 )
  {
    v19 = *(_OWORD *)v13;
  }
  else
  {
    *(_QWORD *)&v19 = sub_141696260(v15, v14, v16, v17);
    *(_OWORD *)v18 = v19;
    *(_BYTE *)(v18 + 16) = 1;
  }
  *(_QWORD *)v18 = v19 + 1;
  v25 = v19;
  nullsub_1(v19 + 1);
  v20 = sub_140001650(6, 1);
  if ( !v20 )
    sub_141938D2B(1, 6);
  v22 = v20;
  *(_WORD *)(v20 + 4) = 28005;
  *(_DWORD *)v20 = 1953724787;
  nullsub_1(v21);
  v23 = sub_140001650(6, 1);
  if ( !v23 )
    sub_141938D2B(1, 6);
  *(_WORD *)(v23 + 4) = 12914;
  *(_DWORD *)v23 = 1702125943;
  *(_DWORD *)(a1 + 384) = 7;
  *(_QWORD *)a1 = 15;
  *(_QWORD *)(a1 + 8) = v26;
  *(_QWORD *)(a1 + 16) = 15;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 8;
  *(_QWORD *)(a1 + 56) = v27;
  *(_QWORD *)(a1 + 64) = 8;
  *(_OWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 8;
  *(_QWORD *)(a1 + 104) = v28;
  *(_QWORD *)(a1 + 112) = 8;
  *(_OWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 8;
  *(_QWORD *)(a1 + 152) = v29;
  *(_QWORD *)(a1 + 160) = 8;
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 168) = 4;
  *(_QWORD *)(a1 + 176) = v30;
  *(_QWORD *)(a1 + 184) = 4;
  *(_BYTE *)(a1 + 394) = 1;
  *(_QWORD *)(a1 + 192) = 4;
  *(_QWORD *)(a1 + 200) = v31;
  *(_QWORD *)(a1 + 208) = 4;
  *(_OWORD *)(a1 + 288) = *(_OWORD *)&off_141A39740;
  *(_OWORD *)(a1 + 304) = xmmword_141A39750;
  *(_OWORD *)(a1 + 320) = v25;
  *(_QWORD *)(a1 + 216) = 6;
  *(_QWORD *)(a1 + 224) = v22;
  *(_QWORD *)(a1 + 232) = 6;
  *(_WORD *)(a1 + 388) = 20;
  *(_DWORD *)(a1 + 390) = 1;
  *(_QWORD *)(a1 + 240) = 6;
  *(_QWORD *)(a1 + 248) = v23;
  *(_QWORD *)(a1 + 256) = 6;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 1;
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 395) = 0;
  return a1;
}
