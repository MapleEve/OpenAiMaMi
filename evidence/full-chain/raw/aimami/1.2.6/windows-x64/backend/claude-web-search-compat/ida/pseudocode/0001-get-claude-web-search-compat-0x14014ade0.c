// Function: sub_14014ADE0 (get_claude_web_search_compat command owner)
// EA: 0x14014ADE0
// Source: mcp__ida-pro-mcp-win__decompile, live IDB "AiMaMi 1.2.6 win64.exe.i64"
// Retrieved: 2026-08-06, session windows-x64 version_delta pass
// No truncation marker observed; full body returned.
__int64 __fastcall sub_14014ADE0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int128 v4; // kr00_16
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi
  _BYTE v11[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+238h] [rbp+1B8h]
  _BYTE v13[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v14; // [rsp+3C0h] [rbp+340h]
  int v15; // [rsp+3C8h] [rbp+348h]
  int v16; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v17[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v18[48]; // [rsp+3E0h] [rbp+360h] BYREF
  _OWORD v19[2]; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v20; // [rsp+580h] [rbp+500h] BYREF
  __int128 v21; // [rsp+590h] [rbp+510h]
  __int128 v22; // [rsp+5A0h] [rbp+520h]
  __int128 v23; // [rsp+5B0h] [rbp+530h]
  __int128 v24; // [rsp+5C0h] [rbp+540h]
  _BYTE v25[48]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v26; // [rsp+600h] [rbp+580h]
  __int128 v27; // [rsp+610h] [rbp+590h]
  __int64 v28; // [rsp+628h] [rbp+5A8h]
  __int128 v29; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v30; // [rsp+640h] [rbp+5C0h]
  __int64 v31; // [rsp+648h] [rbp+5C8h]
  __int64 v32; // [rsp+650h] [rbp+5D0h]
  char v33; // [rsp+65Eh] [rbp+5DEh]
  char v34; // [rsp+65Fh] [rbp+5DFh]
  __int64 v35; // [rsp+660h] [rbp+5E0h]

  v35 = -2; /*0x14014adf7*/
  sub_14172B820(v11, a1, 520); /*0x14014ae15*/
  sub_14172B820(v13, a1 + 520, 400); /*0x14014ae31*/
  v30 = *(_QWORD *)(a1 + 936); /*0x14014ae3d*/
  v29 = *(_OWORD *)(a1 + 920); /*0x14014ae4b*/
  v18[4] = 0; /*0x14014ae52*/
  v17[0] = aGetClaudeWebSe; /*0x14014ae64*/  // "get_claude_web_search_compat"
  v17[1] = 28; /*0x14014ae6b*/
  v18[0] = aManager_0; /*0x14014ae7d*/  // "manager"
  v18[1] = 7; /*0x14014ae84*/
  v18[2] = v11; /*0x14014ae8f*/
  v18[3] = &v29; /*0x14014ae9d*/
  v34 = 1; /*0x14014aeaf*/
  v2 = sub_14002B2A0((volatile void *)(v12 + 16)); /*0x14014aeb6*/  // generic hashbrown-SIMD registry lookup + futex wait
  if ( v2 ) /*0x14014aebf*/
  {
LABEL_2:
    v34 = 1; /*0x14014aec5*/
    sub_140B2A730(&v20, v2); /*0x14014aed6*/
    sub_14172B820(v17, a1 + 520, 400); /*0x14014aeec*/
    if ( (_QWORD)v20 != -1 ) /*0x14014aef9*/
    {
      v27 = v24; /*0x14014af06*/
      v26 = v23; /*0x14014af29*/
      *(_OWORD *)&v25[32] = v22; /*0x14014af30*/
      *(_OWORD *)&v25[16] = v21; /*0x14014af37*/
      *(_OWORD *)v25 = v20; /*0x14014af3e*/
LABEL_14:
      v33 = 0; /*0x14014b0ba*/
      sub_140A92CA0(v17, v25); /*0x14014b0cf*/
      goto LABEL_15; /*0x14014b0cf*/
    }
    v3 = *((_QWORD *)&v20 + 1); /*0x14014b012*/
    v4 = v21; /*0x14014b020*/
    if ( v21 < 0 ) /*0x14014b02a*/
    {
      v5 = 0; /*0x14014b02c*/
      goto LABEL_8; /*0x14014b02c*/
    }
    if ( *((_QWORD *)&v21 + 1) ) /*0x14014b04a*/
    {
      nullsub_1(); /*0x14014b050*/
      v5 = 1; /*0x14014b055*/
      v6 = sub_140001650(*((_QWORD *)&v4 + 1), 1); /*0x14014b062*/
      if ( !v6 ) /*0x14014b06a*/
      {
LABEL_8:
        v31 = v4; /*0x14014b02e*/
        v32 = v3; /*0x14014b035*/
        sub_14176E54B(v5, *((_QWORD *)&v4 + 1)); /*0x14014b042*/
      }
      v7 = v6; /*0x14014b06c*/
      sub_14172B820(v6, v4, *((_QWORD *)&v4 + 1)); /*0x14014b078*/
      if ( !v3 ) /*0x14014b080*/
      {
LABEL_13:
        v25[8] = 3; /*0x14014b093*/
        *(_QWORD *)&v25[16] = *((_QWORD *)&v4 + 1); /*0x14014b09a*/
        *(_QWORD *)&v25[24] = v7; /*0x14014b0a1*/
        *(_QWORD *)&v25[32] = *((_QWORD *)&v4 + 1); /*0x14014b0a8*/
        *(_QWORD *)v25 = -1; /*0x14014b0af*/
        goto LABEL_14; /*0x14014b0af*/
      }
    }
    else
    {
      v7 = 1; /*0x14014b185*/
      if ( !*((_QWORD *)&v20 + 1) ) /*0x14014b18d*/
        goto LABEL_13; /*0x14014b18d*/
    }
    sub_140001660(v4, v3, 1); /*0x14014b08e*/
    goto LABEL_13; /*0x14014b08e*/
  }
  v34 = 1; /*0x14014af51*/
  sub_14172C620(v19, v17, v18); /*0x14014af66*/  // generic manager.request(name="get_claude_web_search_compat", target="manager") future construction
  if ( LOBYTE(v19[0]) == 0xFF ) /*0x14014af73*/
  {
    v2 = *((_QWORD *)&v19[0] + 1); /*0x14014b179*/
    goto LABEL_2; /*0x14014b180*/
  }
  *(_OWORD *)&v25[24] = v19[1]; /*0x14014af87*/
  *(_OWORD *)&v25[8] = v19[0]; /*0x14014af8e*/
  sub_14172B820(v17, a1 + 520, 360); /*0x14014afa8*/
  v20 = *(_OWORD *)(a1 + 880); /*0x14014afbb*/
  *(_QWORD *)&v21 = *(_QWORD *)(a1 + 896); /*0x14014afc9*/
  *(_QWORD *)v25 = 1; /*0x14014afdc*/
  v34 = 0; /*0x14014afe7*/
  sub_140AFFC30((unsigned int)v17, v14, (unsigned int)v25, (unsigned int)&v20, v15, v16); /*0x14014b007*/  // registry dispatch + WakeByAddressSingle: emits CoreEnvelope response to frontend invoke channel
LABEL_15:
  if ( (_QWORD)v29 != -1 ) /*0x14014b0dd*/
  {
    v8 = *((_QWORD *)&v29 + 1); /*0x14014b0e3*/
    v31 = v30; /*0x14014b0f1*/
    v32 = 0; /*0x14014b0f8*/
    v28 = *((_QWORD *)&v29 + 1); /*0x14014b103*/
    while ( v31 != v32 ) /*0x14014b11e*/
    {
      ++v32; /*0x14014b123*/
      v9 = v8 + 96; /*0x14014b12a*/
      sub_140401FB0(); /*0x14014b12e*/
      v8 = v9; /*0x14014b134*/
    }
    if ( (_QWORD)v29 ) /*0x14014b143*/
      sub_140001660(*((_QWORD *)&v29 + 1), 96 * v29, 8); /*0x14014b15a*/
  }
  return sub_140043900(v11); /*0x14014b169*/  // drop-in-place cleanup of stack-local buffers
}

// refs (verified via decompile() xref table):
// 0x14172b820 sub_14172B820 (memcpy-style copy helper, generic)
// 0x14177a12b aGetClaudeWebSe -> string literal "get_claude_web_search_compat"
// 0x14177a10e aManager_0 -> string literal "manager" (actor/manager target name)
// 0x14002b2a0 sub_14002B2A0 (hashbrown-SIMD registry probe + futex wait, generic runtime primitive, shared across many commands)
// 0x140b2a730 sub_140B2A730 (result unwrap/poll continuation helper)
// 0x140a92ca0 sub_140A92CA0 (CoreEnvelope-style response finalize, generic)
// 0x14172c620 sub_14172C620 (generic future-combinator constructor for manager.request(name, args))
// 0x140affc30 sub_140AFFC30 (registry dispatch + WakeByAddressSingle wake-up, generic manager call/reply glue)
// 0x140401fb0 sub_140401FB0 (Vec<T>::drop_in_place element destructor, generic)
// 0x140043900 sub_140043900 (stack local drop_in_place cleanup, generic)
