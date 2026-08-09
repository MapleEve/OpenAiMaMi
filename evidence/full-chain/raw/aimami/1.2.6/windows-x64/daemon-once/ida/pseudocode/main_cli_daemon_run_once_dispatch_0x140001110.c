// sub_140001110 @ 0x140001110 | windows-x64 1.2.6 | role: main() CLI argv dispatcher. Parses argv looking for
// "daemon-run-once" (15-char literal compare via XOR against packed constants 0x722D6E6F6D656164/0x65636E6F2D6E7572
// = "daemon-r"/"once-cn" reversed-endian fragments of "daemon-run-once") and a "--codex-home" flag
// (0x2D7865646F632D2D = "--codex-x" reversed fragment), then calls sub_14018C940(&result, &args) with the parsed
// codex_home path. This is the CLI entrypoint equivalent to macOS 1.2.3 symbol codexmate_lib::run_daemon_once_cli's
// caller path (macOS main()/clap dispatch, not separately captured in this raw leaf).
// verbatim Hex-Rays decompile() output, IDA MCP win, 2026-08-06
__int64 __fastcall sub_140001110()
{
  __int64 v0; // r13
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int128 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  __int128 v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+0h]
  char v21; // [rsp+88h] [rbp+8h]
  __int64 v22; // [rsp+98h] [rbp+18h]
  __int128 v23; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+30h]
  char v25; // [rsp+BFh] [rbp+3Fh]
  __int64 v26; // [rsp+C0h] [rbp+40h]

  v26 = -2; /*0x14000112b*/
  sub_14152B450(&v13); /*0x14000113a*/
  v17 = 0; /*0x14000113f*/
  sub_1415394E0(&v19, &v13); /*0x14000114e*/
  if ( (_QWORD)v19 == -1 ) /*0x14000115c*/
  {
LABEL_9:
    result = sub_14018E130(); /*0x1400011cb*/
    if ( v16 != v14 ) /*0x1400011dc*/
    {
      v2 = (unsigned __int64)(v16 - v14) >> 5; /*0x1400011e2*/
      v3 = (_QWORD *)(v14 + 8); /*0x1400011e6*/
      do /*0x1400011f7*/
      {
        v4 = *(v3 - 1); /*0x1400011fd*/
        if ( v4 ) /*0x140001204*/
          result = sub_140001660(*v3, v4, 1); /*0x14000120f*/
        v3 += 4; /*0x1400011f0*/
        --v2; /*0x1400011f4*/
      }
      while ( v2 ); /*0x1400011f7*/
    }
    goto LABEL_38; /*0x1400011f7*/
  }
  if ( (_QWORD)v19 ) /*0x140001161*/
    sub_140001660(*((_QWORD *)&v19 + 1), v19, 1); /*0x14000116d*/
  sub_1415394E0(&v23, &v13); /*0x14000117b*/
  if ( (_QWORD)v23 == -1 /*0x1400011b1*/
    || v24 != 15
    || **((_QWORD **)&v23 + 1) ^ 0x722D6E6F6D656164LL | *(_QWORD *)(*((_QWORD *)&v23 + 1) + 7LL) ^ 0x65636E6F2D6E7572LL )
  {
    if ( (__int64)v23 > 0 ) /*0x1400011b9*/
      sub_140001660(*((_QWORD *)&v23 + 1), v23, 1); /*0x1400011c5*/
    goto LABEL_9; /*0x1400011c5*/
  }
  if ( (_QWORD)v23 ) /*0x140001219*/
    sub_140001660(*((_QWORD *)&v23 + 1), v23, 1); /*0x140001221*/
  v5 = -1; /*0x140001226*/
  while ( 1 ) /*0x140001244*/
  {
    v22 = v5; /*0x140001244*/
    if ( v17 ) /*0x14000124f*/
    {
      v17 = 0; /*0x140001319*/
      v25 = 1; /*0x140001321*/
      if ( sub_140001090(&v13) ) /*0x140001328*/
        break; /*0x140001328*/
    }
    v25 = 1; /*0x140001255*/
    sub_1415394E0(&v11, &v13); /*0x14000125f*/
    if ( (_QWORD)v11 == -1 ) /*0x14000126a*/
      break; /*0x14000126a*/
    v24 = v12; /*0x140001274*/
    v23 = v11; /*0x14000127c*/
    if ( v12 != 12 /*0x1400012a9*/
      || (v6 = *((_QWORD *)&v23 + 1),
          **((_QWORD **)&v23 + 1) ^ 0x2D7865646F632D2DLL | *(unsigned int *)(*((_QWORD *)&v23 + 1) + 8LL) ^ 0x656D6F68LL) )
    {
      *(_QWORD *)&v19 = &v23; /*0x140001427*/
      *((_QWORD *)&v19 + 1) = sub_1400015F0; /*0x140001432*/
      sub_14152D700(&unk_14177204F, &v19); /*0x140001441*/
      sub_14152C9D0(2); /*0x14000144c*/
    }
    if ( v17 && (v17 = 0, sub_140001090(&v13)) || (sub_1415394E0(&v19, &v13), v5 = v19, (_QWORD)v19 == -1) ) /*0x1400012d3*/
    {
      sub_14152D700(&unk_141772030, 63); /*0x140001460*/
      sub_14152C9D0(2); /*0x14000146b*/
    }
    v7 = *((_QWORD *)&v19 + 1); /*0x1400012d9*/
    v0 = v20; /*0x1400012dd*/
    if ( v22 > 0 ) /*0x1400012e8*/
      sub_140001660(v18, v22, 1); /*0x1400012f4*/
    if ( (_QWORD)v23 ) /*0x140001300*/
      sub_140001660(v6, v23, 1); /*0x14000130f*/
    v18 = v7; /*0x140001240*/
  }
  *(_QWORD *)&v19 = v22; /*0x140001377*/
  *((_QWORD *)&v19 + 1) = v18; /*0x14000137f*/
  v20 = v0; /*0x140001383*/
  v21 = 1; /*0x140001387*/
  v25 = 0; /*0x14000138b*/
  result = sub_14018C940((__int64)&v23, (__int64)&v19); /*0x14000139a*/
  if ( (_QWORD)v23 != -1 ) /*0x1400013a5*/
  {
    v20 = v24; /*0x140001477*/
    v19 = v23; /*0x14000147f*/
    *(_QWORD *)&v11 = &v19; /*0x140001483*/
    *((_QWORD *)&v11 + 1) = sub_1400015F0; /*0x14000148e*/
    sub_14152D700(&unk_14177206D, &v11); /*0x14000149d*/
    sub_14152C9D0(1); /*0x1400014a8*/
  }
  if ( v16 != v14 ) /*0x1400013b6*/
  {
    v8 = (unsigned __int64)(v16 - v14) >> 5; /*0x1400013b8*/
    v9 = (_QWORD *)(v14 + 8); /*0x1400013bc*/
    do /*0x1400013d7*/
    {
      v10 = *(v9 - 1); /*0x1400013d9*/
      if ( v10 ) /*0x1400013e0*/
        result = sub_140001660(*v9, v10, 1); /*0x14000013eb*/
      v9 += 4; /*0x1400013d0*/
      --v8; /*0x1400013d4*/
    }
    while ( v8 ); /*0x1400013d7*/
  }
LABEL_38:
  if ( v15 ) /*0x1400013f9*/
    return sub_140001660(v13, 32 * v15, 8); /*0x140001409*/
  return result; /*0x14000140f*/
}

// refs: sub_14152B450, sub_1415394E0, sub_14018E130, sub_140001660, sub_140001090, sub_1400015F0, sub_14152D700,
// unk_14177204F, sub_14152C9D0 (process exit-code-like), unk_141772030, sub_14018C940 (real daemon-run-once body),
// unk_14177206D
