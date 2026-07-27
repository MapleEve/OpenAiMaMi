// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x140660a60  size: 0x45e  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   Small (0x45e) helper with only the module-path panic-location comment as evidence (no distinctive
//   literal strings) -- likely a small shared utility used by the route-handler family above (e.g.
//   header extraction or tracing-span construction), too generic to name precisely from decompile
//   evidence alone.
//
// Referenced strings/symbols:
//   0x140ffa6e0  sub_140FFA6E0
//   0x14104b490  sub_14104B490
//   0x141042bd0  sub_141042BD0
//   0x1416c1840  sub_1416C1840
//   0x141ec90b8  off_141EC90B8
//   0x1416c2250  sub_1416C2250
//   0x141018b80  sub_141018B80
//   0x141ec8d80  off_141EC8D80
//   0x1417681b5  aCodexmateLibCo_26   "codexmate_lib::core::relay::proxy_server"
//   0x141766ad6  aSrcCoreRelayPr   "src\core\relay\proxy_server.rs"
//   0x14177c118  unk_14177C118
//   0x1412c36a0  sub_1412C36A0
//   0x1416c1970  sub_1416C1970
//   0x1400015f0  sub_1400015F0
//   0x14177c173  unk_14177C173
//   0x140001660  sub_140001660
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x141768210  unk_141768210
//   0x1405e12d0  sub_1405E12D0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
signed __int64 __fastcall sub_140660A60(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  unsigned int v4; // ecx
  signed __int64 v5; // rcx
  __int64 v6; // rdx
  signed __int64 result; // rax
  __int64 v8; // r8
  __int64 v9; // rtt
  char v10; // al
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 *v15; // r14
  char v16; // di
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-60h] BYREF
  const char *v19; // [rsp+28h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  const char *v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  const char *v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+68h] [rbp-18h]
  void *v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  __int64 v30; // [rsp+2C8h] [rbp+248h]
  int v31; // [rsp+2D0h] [rbp+250h]
  __int64 v32; // [rsp+2E8h] [rbp+268h]
  int v33; // [rsp+2F0h] [rbp+270h]
  __int64 v34; // [rsp+308h] [rbp+288h]
  int v35; // [rsp+310h] [rbp+290h]
  __int64 v36; // [rsp+358h] [rbp+2D8h]
  __int64 v37; // [rsp+3B0h] [rbp+330h]
  _QWORD *v38; // [rsp+3B8h] [rbp+338h]
  _QWORD *v39; // [rsp+3C0h] [rbp+340h] BYREF
  _QWORD *v40; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+3D0h] [rbp+350h]
  _QWORD *v42; // [rsp+3D8h] [rbp+358h] BYREF
  _QWORD *v43; // [rsp+3E0h] [rbp+360h]
  char v44; // [rsp+3F6h] [rbp+376h] BYREF
  char v45; // [rsp+3F7h] [rbp+377h]
  __int64 v46; // [rsp+3F8h] [rbp+378h]

  v46 = -2; /*0x140660a75*/
  sub_140FFA6E0(&v18); /*0x140660a87*/
  v2 = ((int)v18 >> 13) - 1; /*0x140660a96*/
  v3 = 0; /*0x140660a9a*/
  if ( (int)v18 >> 13 <= 0 ) /*0x140660a9f*/
  {
    v4 = (1 - ((int)v18 >> 13)) / 0x190u + 1; /*0x140660ab4*/
    v2 += 400 * v4; /*0x140660abd*/
    v3 = -146097 * v4; /*0x140660ac0*/
  }
  v5 = 1000 /*0x140660b27*/
     * (HIDWORD(v18)
      + 86400LL
      * (int)(((v2 / 100) >> 2) + ((1461 * v2) >> 2) + v3 + (((unsigned int)v18 >> 4) & 0x1FF) - v2 / 100 - 719163))
     + (unsigned int)v19 / 0xF4240uLL;
  v6 = *(_QWORD *)(a1 + 40); /*0x140660b2a*/
  result = *(_QWORD *)(v6 + 16); /*0x140660b2e*/
  v8 = v5 - result; /*0x140660b4c*/
  if ( __OFSUB__(v5, result) ) /*0x140660b4c*/
    v8 = (v5 - result >= 0) + 0x7FFFFFFFFFFFFFFFLL; /*0x140660b4f*/
  if ( v8 >= 15000 ) /*0x140660b5a*/
  {
    v9 = *(_QWORD *)(v6 + 16); /*0x140660b60*/
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 16), v5, result); /*0x140660b60*/
    if ( v9 == result ) /*0x140660b66*/
    {
      sub_14104B490(&v18); /*0x140660b73*/
      v34 = 300; /*0x140660b78*/
      v35 = 0; /*0x140660b83*/
      v30 = 30; /*0x140660b8d*/
      v31 = 0; /*0x140660b98*/
      v36 = 10; /*0x140660ba2*/
      v32 = 60; /*0x140660bad*/
      v33 = 0; /*0x140660bb8*/
      v10 = sub_141042BD0(&v18); /*0x140660bc5*/
      v12 = v11; /*0x140660bca*/
      if ( (v10 & 1) == 0 /*0x140660c37*/
        || (v39 = v11,
            v40 = &v39,
            v41 = sub_141031F10,
            sub_14149C0F0(&v42, &unk_141768210, &v40),
            sub_1405E12D0(&v39),
            v11 = v42,
            v12 = v43,
            v42 == (_QWORD *)-1LL) )
      {
        v40 = v12; /*0x140660d21*/
        v13 = *(_QWORD *)(a1 + 24); /*0x140660d28*/
        v14 = 0x3FFFFFFF; /*0x140660d30*/
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 16), 0x3FFFFFFF, 0) ) /*0x140660d37*/
        {
          v45 = 1; /*0x140660e7a*/
          sub_1416C1840(v13 + 16); /*0x140660e84*/
        }
        v15 = off_141EC90B8; /*0x140660d42*/
        if ( 2 * *off_141EC90B8 ) /*0x140660d4c*/
        {
          v45 = 1; /*0x140660e8f*/
          v16 = sub_1416C2250(v14, v11) ^ 1; /*0x140660e9e*/
        }
        else
        {
          v16 = 0; /*0x140660d58*/
        }
        v42 = (_QWORD *)(v13 + 16); /*0x140660d5e*/
        LOBYTE(v43) = v16; /*0x140660d65*/
        v38 = v40; /*0x140660d73*/
        v37 = v13 + 32; /*0x140660d7e*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v13 + 32)) ) /*0x140660d89*/
          sub_141018B80(v13 + 32); /*0x140660d93*/
        v17 = v13 + 32; /*0x140660da0*/
        *(_QWORD *)(v13 + 32) = v38; /*0x140660da4*/
        result = *(_QWORD *)off_141EC8D80; /*0x140660dae*/
        if ( *(_QWORD *)off_141EC8D80 >= 3u ) /*0x140660db5*/
        {
          v18 = 0; /*0x140660db7*/
          v19 = aCodexmateLibCo_26; /*0x140660dc6*/
          v20 = 40; /*0x140660dca*/
          v21 = 0; /*0x140660dd2*/
          v22 = aSrcCoreRelayPr; /*0x140660de1*/
          v23 = 30; /*0x140660de5*/
          v24 = 3; /*0x140660ded*/
          v25 = aCodexmateLibCo_26; /*0x140660df5*/
          v26 = 40; /*0x140660df9*/
          v27 = 0xED00000001LL; /*0x140660e0b*/
          v28 = &unk_14177C118; /*0x140660e16*/
          v29 = 183; /*0x140660e1a*/
          result = sub_1412C36A0(&v44, &v18); /*0x140660e2d*/
        }
        if ( !v16 ) /*0x140660e36*/
        {
          result = 2 * *v15; /*0x140660e3b*/
          if ( result ) /*0x140660e41*/
          {
            v45 = 0; /*0x140660ea7*/
            result = sub_1416C2250(v17, v11); /*0x140660eae*/
            if ( !(_BYTE)result ) /*0x140660eb6*/
              *(_BYTE *)(v13 + 24) = 1; /*0x140660eb8*/
          }
        }
        if ( (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 16), 0xC0000001) - 0x3FFFFFFF) >= 0x40000000 ) /*0x140660e58*/
        {
          v45 = 0; /*0x140660e68*/
          return sub_1416C1970(v13 + 16); /*0x140660e72*/
        }
      }
      else
      {
        result = *(_QWORD *)off_141EC8D80; /*0x140660c60*/
        if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140660c67*/
        {
          v40 = &v42; /*0x140660c6d*/
          v41 = sub_1400015F0; /*0x140660c7b*/
          v18 = 0; /*0x140660c82*/
          v19 = aCodexmateLibCo_26; /*0x140660c91*/
          v20 = 40; /*0x140660c95*/
          v21 = 0; /*0x140660c9d*/
          v22 = aSrcCoreRelayPr; /*0x140660cac*/
          v23 = 30; /*0x140660cb0*/
          v24 = 2; /*0x140660cb8*/
          v25 = aCodexmateLibCo_26; /*0x140660cc0*/
          v26 = 40; /*0x140660cc4*/
          v27 = 0xF200000001LL; /*0x140660cd6*/
          v28 = &unk_14177C173; /*0x140660ce1*/
          v29 = (__int64)&v40; /*0x140660ce5*/
          result = sub_1412C36A0(&v44, &v18); /*0x140660cf4*/
          v11 = v42; /*0x140660cfa*/
        }
        if ( v11 ) /*0x140660d04*/
          return sub_140001660(v43, v11, 1); /*0x140660d17*/
      }
    }
  }
  return result; /*0x140660e5a*/
}
