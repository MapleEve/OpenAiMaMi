// win 1.2.1 NEW upload_debug_report 0x140c2a240 d=1
__int64 __fastcall sub_140C2A240(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  volatile signed __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-10h]

  v1 = a1; /*0x140c2a254*/
  result = *(unsigned __int8 *)(a1 + 240); /*0x140c2a257*/
  if ( *(_BYTE *)(a1 + 240) ) /*0x140c2a257*/
  {
    if ( (_DWORD)result == 3 ) /*0x140c2a269*/
    {
      v15 = a1; /*0x140c2a332*/
      v8 = *(volatile signed __int64 **)(a1 + 248); /*0x140c2a336*/
      if ( sub_141221580(v8) ) /*0x140c2a340*/
        sub_14122BD90((__int64)v8); /*0x140c2a34d*/
      *(_WORD *)(v15 + 241) = 0; /*0x140c2a357*/
      v7 = sub_1413B4DB0(*(_QWORD *)(v15 + 216), *(_QWORD *)(v15 + 224)); /*0x140c2a36e*/
      if ( v7 ) /*0x140c2a377*/
LABEL_17:
        sub_1400F6E90(v7); /*0x140c2a379*/
    }
    else
    {
      if ( (_DWORD)result != 4 ) /*0x140c2a272*/
        return result; /*0x140c2a272*/
      v15 = a1; /*0x140c2a27f*/
      sub_140C29AF0(a1 + 248); /*0x140c2a283*/
      v3 = *(_QWORD *)(v1 + 1088); /*0x140c2a28d*/
      if ( v3 ) /*0x140c2a297*/
        sub_140001360(*(_QWORD *)(v1 + 1096), v3, 1); /*0x140c2a2a6*/
      v4 = *(_QWORD *)(v1 + 1112); /*0x140c2a2ab*/
      if ( v4 ) /*0x140c2a2b5*/
        sub_140001360(*(_QWORD *)(v1 + 1120), v4, 1); /*0x140c2a2c4*/
      v5 = *(_QWORD *)(v1 + 1136); /*0x140c2a2c9*/
      if ( v5 ) /*0x140c2a2d3*/
        sub_140001360(*(_QWORD *)(v1 + 1144), v5, 1); /*0x140c2a2e2*/
      v6 = *(_QWORD *)(v1 + 1160); /*0x140c2a2e7*/
      if ( v6 ) /*0x140c2a2f1*/
        sub_140001360(*(_QWORD *)(v1 + 1168), v6, 1); /*0x140c2a300*/
      *(_WORD *)(v1 + 241) = 0; /*0x140c2a305*/
      v7 = sub_1413B4DB0(*(_QWORD *)(v1 + 216), *(_QWORD *)(v1 + 224)); /*0x140c2a31c*/
      if ( v7 ) /*0x140c2a325*/
        goto LABEL_17; /*0x140c2a325*/
    }
    v1 = v15; /*0x140c2a382*/
    v9 = *(_QWORD *)(v15 + 208); /*0x140c2a386*/
    if ( v9 ) /*0x140c2a390*/
      sub_140001360(*(_QWORD *)(v15 + 216), v9, 1); /*0x140c2a39f*/
    v10 = *(_QWORD *)(v15 + 184); /*0x140c2a3a4*/
    if ( v10 ) /*0x140c2a3ae*/
      sub_140001360(*(_QWORD *)(v15 + 192), v10, 1); /*0x140c2a3bd*/
    v11 = *(_QWORD *)(v15 + 160); /*0x140c2a3c2*/
    if ( v11 ) /*0x140c2a3cc*/
      sub_140001360(*(_QWORD *)(v15 + 168), v11, 1); /*0x140c2a3db*/
    v12 = *(_QWORD *)(v15 + 112); /*0x140c2a3e0*/
    result = 120; /*0x140c2a3e4*/
    v13 = 136; /*0x140c2a3e9*/
    if ( !v12 ) /*0x140c2a3f1*/
      goto LABEL_26; /*0x140c2a3f1*/
    goto LABEL_25; /*0x140c2a3f1*/
  }
  v12 = *(_QWORD *)(a1 + 16); /*0x140c2a42a*/
  result = 24; /*0x140c2a42e*/
  v13 = 40; /*0x140c2a433*/
  if ( v12 ) /*0x140c2a43b*/
LABEL_25:
    result = sub_140001360(*(_QWORD *)(v1 + result), v12, 1); /*0x140c2a3f3*/
LABEL_26:
  v14 = *(_QWORD *)(v1 + v13); /*0x140c2a402*/
  if ( v14 ) /*0x140c2a409*/
    return sub_140001360(*(_QWORD *)(v1 + v13 + 8), v14, 1); /*0x140c2a41d*/
  return result; /*0x140c2a416*/
}