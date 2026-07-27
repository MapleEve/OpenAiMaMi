// module: core::relay::proxy_server (codexmate_lib::core::relay::proxy_server)
// source (embedded panic Location / cross-platform symbol match): src\core\relay\proxy_server.rs
// binary: AiMaMi.1.2.3 win64.exe (Windows x64, stripped, imagebase 0x140000000)
// addr: 0x14062e9b0  size: 0x170e  tier: C  evidence: panic-location-2hop
// decompiled via IDA Hex-Rays (remote IDA MCP, host <host>)
// status: FULL — not truncated, single decompile call, no chunking needed
//
// Functional summary:
//   References tracing target 'proxy.upstream' and error string 'build streaming body failed' --
//   constructs the outgoing streaming HTTP request/response body toward the selected upstream provider,
//   surfacing a structured error if the reqwest/hyper streaming body builder fails.
//
// Referenced strings/symbols:
//   0x140669440  sub_140669440
//   0x1416c1680  sub_1416C1680
//   0x1416c1970  sub_1416C1970
//   0x1405a48c0  sub_1405A48C0
//   0x141764700  unk_141764700
//   0x14103c250  sub_14103C250
//   0x1406c67e0  sub_1406C67E0
//   0x14103c180  sub_14103C180
//   0x14104dcf0  sub_14104DCF0
//   0x1405e6830  sub_1405E6830
//   0x140660a60  sub_140660A60
//   0x141031f10  sub_141031F10
//   0x14149c0f0  sub_14149C0F0
//   0x141767f78  unk_141767F78
//   0x14066b160  sub_14066B160
//   0x14177c428  aProxyUpstream   "proxy.upstream"
//   0x140001660  sub_140001660
//   0x1405e12d0  sub_1405E12D0
//   0x141018b80  sub_141018B80
//   0x1400104f0  sub_1400104F0
//   0x140001690  nullsub_1
//   0x140001650  sub_140001650
//   0x1416c2d4b  sub_1416C2D4B
//   0x141684120  sub_141684120
//   0x14032ba10  sub_14032BA10
//   0x14032b840  sub_14032B840
//   0x14143ed80  sub_14143ED80
//   0x1400015f0  sub_1400015F0
//   0x141768089  unk_141768089
//   0x140017140  sub_140017140
//   0x1405ae7f0  sub_1405AE7F0
//   0x141442b90  sub_141442B90
//   0x141763f20  xmmword_141763F20
//   0x141763f00  xmmword_141763F00
//   0x141763f10  xmmword_141763F10
//   0x141742480  xmmword_141742480
//   0x141742490  xmmword_141742490
//   0x1417424a0  xmmword_1417424A0
//   0x141742460  xmmword_141742460
//   0x1416c62f0  xmmword_1416C62F0
//   0x141742470  xmmword_141742470
//   0x14065ff80  sub_14065FF80
//   0x1414464f0  sub_1414464F0
//   0x141441c10  sub_141441C10
//   0x1406c4a30  sub_1406C4A30
//   0x1416c30e3  sub_1416C30E3
//   0x141790c68  off_141790C68
//   0x141790c80  off_141790C80
//   0x141763f40  xmmword_141763F40
//   0x141763f50  xmmword_141763F50
//   0x140ea3b00  sub_140EA3B00
//   0x14149c500  sub_14149C500
//   0x1416c2d31  sub_1416C2D31
//   0x1416c3040  sub_1416C3040
//   0x1417b3bc8  off_1417B3BC8
//   0x141768008  unk_141768008
//   0x140b22c80  sub_140B22C80
//   0x141767708  aBuildStreaming   "build streaming body failed"
//   0x1417b3be0  off_1417B3BE0
//   0x1416c3400  sub_1416C3400
//   0x141767ff0  off_141767FF0
//   0x1416c3420  sub_1416C3420
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14062E9B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r12
  __m128i v11; // xmm1
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int32 v15; // eax
  bool v16; // of
  signed __int32 v17; // eax
  int v18; // ett
  __int64 v19; // rt0
  __int64 v20; // r14
  unsigned __int32 v21; // eax
  bool v22; // of
  signed __int32 v23; // eax
  int v24; // ett
  __int64 v25; // rt0
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  char result; // al
  __int64 v33; // rbx
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  int v37; // r14d
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rbx
  volatile signed __int64 *v42; // rbx
  int v43; // edx
  __int64 v44; // r14
  __int64 (__fastcall **v45)(); // r15
  __int16 v46; // r15
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned int v49; // eax
  int v50; // ecx
  __int64 v51; // r13
  __int64 v52; // rax
  int v53; // edi
  __int64 v54; // rax
  int v55; // edx
  _QWORD *v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // rcx
  __m128i v59; // xmm1
  __m128i v60; // xmm2
  __m128i v61; // xmm3
  __int16 v62; // cx
  unsigned __int64 v63; // rdx
  __m128i v64; // xmm1
  __m128i v65; // xmm2
  __m128i v66; // xmm1
  __m128i v67; // xmm2
  __m128i v68; // xmm3
  __int64 v69; // r12
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // rdi
  __int64 v72; // r14
  __m128i si128; // xmm8
  __m128i v74; // xmm9
  __m128i v75; // xmm10
  __m128i v76; // xmm11
  __m128i v77; // xmm12
  __m128i v78; // xmm13
  __m128i v79; // xmm14
  __m128i v80; // xmm15
  __m128i v81; // xmm6
  __m128i v82; // xmm7
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // r8
  _QWORD *v85; // rbx
  __int64 v86; // r9
  __int64 v87; // rdx
  _QWORD *i; // r9
  __int64 v89; // r14
  __int64 v90; // rdx
  __int64 v91; // rcx
  _QWORD *v92; // r14
  _QWORD *v93; // rbx
  __int64 v94; // rax
  _QWORD *v95; // rbx
  unsigned __int64 v96; // r12
  unsigned __int64 v97; // rdi
  unsigned __int64 v98; // r13
  __int64 v99; // r15
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r8
  unsigned __int64 v103; // rdx
  __int64 v104; // rcx
  __m128i v105; // xmm0
  __m128i v106; // xmm1
  __m128i v107; // xmm2
  __m128i v108; // xmm3
  __int64 v109; // rcx
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 j; // rax
  unsigned __int8 v115; // cl
  __int64 v116; // rdx
  __int64 v117; // r8
  __m128i v118; // xmm0
  __int64 v119; // rax
  __int64 v120; // r8
  __int64 v121; // rdx
  void (__fastcall *v122)(unsigned __int64 *, __int64, __int64); // rax
  __m128i v123; // xmm1
  __m128i v124; // xmm1
  __m128i v125; // xmm2
  __m128i v126; // xmm3
  __int64 v127; // rcx
  __m128i v128; // xmm0
  __m128i v129; // xmm1
  __int64 v130; // rax
  __int64 v131; // rcx
  char v132; // of
  __int64 (__fastcall **v133)(); // rdx
  __int64 v134; // rcx
  volatile signed __int64 *v135; // rdi
  __int64 v136; // rt0
  __int64 v137; // rt0
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 (__fastcall **v141)(); // rax
  __int128 v142; // xmm0
  __int128 v143; // xmm1
  __int128 v144; // xmm2
  int v145; // edx
  __int64 v146; // rdi
  __int64 v147; // rcx
  __m128i v148; // [rsp+30h] [rbp-50h] BYREF
  __m128i v149; // [rsp+40h] [rbp-40h] BYREF
  __m128i v150; // [rsp+50h] [rbp-30h] BYREF
  __m128i v151[3]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v152; // [rsp+90h] [rbp+10h] BYREF
  __m128i v153; // [rsp+A0h] [rbp+20h] BYREF
  __m128i v154; // [rsp+B0h] [rbp+30h] BYREF
  __m128i v155; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v156; // [rsp+D0h] [rbp+50h]
  __int128 v157; // [rsp+E0h] [rbp+60h]
  __m128i v158; // [rsp+F0h] [rbp+70h]
  _QWORD *v159; // [rsp+100h] [rbp+80h]
  __m128i v160; // [rsp+110h] [rbp+90h] BYREF
  __m128i v161; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v162; // [rsp+130h] [rbp+B0h] BYREF
  __m128i v163; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v164; // [rsp+150h] [rbp+D0h]
  __m128i v165[12]; // [rsp+160h] [rbp+E0h] BYREF
  __m128i v166; // [rsp+228h] [rbp+1A8h] BYREF
  _OWORD v167[2]; // [rsp+238h] [rbp+1B8h] BYREF
  __m128i v168; // [rsp+258h] [rbp+1D8h] BYREF
  __m128i v169; // [rsp+268h] [rbp+1E8h]
  __int128 v170; // [rsp+278h] [rbp+1F8h]
  __int128 v171; // [rsp+288h] [rbp+208h]
  __m128i v172; // [rsp+298h] [rbp+218h]
  _QWORD *v173; // [rsp+2A8h] [rbp+228h]
  __m128i v174; // [rsp+2B0h] [rbp+230h] BYREF
  __m128i v175; // [rsp+2C0h] [rbp+240h] BYREF
  __int64 v176; // [rsp+2D0h] [rbp+250h]
  __int64 v177; // [rsp+2D8h] [rbp+258h]
  _BYTE v178[112]; // [rsp+2E0h] [rbp+260h] BYREF
  __m128i v179; // [rsp+350h] [rbp+2D0h] BYREF
  __m256i v180; // [rsp+360h] [rbp+2E0h]
  __m128i v181; // [rsp+380h] [rbp+300h]
  __m128i v182; // [rsp+390h] [rbp+310h]
  __m128i v183; // [rsp+3A0h] [rbp+320h]
  __int128 v184; // [rsp+3B0h] [rbp+330h]
  __m128i v185; // [rsp+3C0h] [rbp+340h] BYREF
  __m128i v186; // [rsp+3D0h] [rbp+350h] BYREF
  __m128i v187; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v188; // [rsp+3F0h] [rbp+370h]
  __int128 v189; // [rsp+400h] [rbp+380h]
  __m128i v190; // [rsp+410h] [rbp+390h] BYREF
  __int64 v191; // [rsp+420h] [rbp+3A0h]
  _BYTE v192[112]; // [rsp+430h] [rbp+3B0h] BYREF
  __m128i v193; // [rsp+4A0h] [rbp+420h] BYREF
  _QWORD *v194; // [rsp+4B0h] [rbp+430h]
  __m128i v195; // [rsp+540h] [rbp+4C0h]
  __m128i v196; // [rsp+550h] [rbp+4D0h] BYREF
  __int64 v197; // [rsp+560h] [rbp+4E0h]
  int v198; // [rsp+56Ch] [rbp+4ECh]
  __int64 v199; // [rsp+570h] [rbp+4F0h]
  _QWORD *v200; // [rsp+578h] [rbp+4F8h]
  __int64 v201; // [rsp+580h] [rbp+500h] BYREF
  __m128i v202; // [rsp+588h] [rbp+508h] BYREF
  __m128i v203; // [rsp+598h] [rbp+518h] BYREF
  unsigned __int64 v204; // [rsp+5A8h] [rbp+528h]
  __int64 v205; // [rsp+5B0h] [rbp+530h]
  unsigned __int16 v206; // [rsp+5BEh] [rbp+53Eh] BYREF
  __int64 v207; // [rsp+5C0h] [rbp+540h]
  __int64 v208; // [rsp+5C8h] [rbp+548h]
  char v209; // [rsp+5D7h] [rbp+557h]
  __int64 v210; // [rsp+5D8h] [rbp+558h]
  char v211; // [rsp+5E7h] [rbp+567h]
  __int64 (__fastcall **v212)(); // [rsp+5E8h] [rbp+568h]
  char v213; // [rsp+5F3h] [rbp+573h]
  char v214; // [rsp+5F4h] [rbp+574h]
  char v215; // [rsp+5F5h] [rbp+575h]
  char v216; // [rsp+5F6h] [rbp+576h]
  char v217; // [rsp+5F7h] [rbp+577h]
  __int64 v218; // [rsp+5F8h] [rbp+578h]

  v218 = -2; /*0x14062ea23*/
  v5 = a2; /*0x14062ea31*/
  v7 = *(unsigned __int8 *)(a2 + 145); /*0x14062ea37*/
  v208 = a2; /*0x14062ea4c*/
  switch ( v7 ) /*0x14062ea53*/
  {
    case 0LL: /*0x14062ea53*/
      *(_BYTE *)(a2 + 144) = 0; /*0x14062ea55*/
      v8 = *(_QWORD *)(a2 + 128); /*0x14062ea5d*/
      *(_OWORD *)(v5 + 96) = *(_OWORD *)(v5 + 120); /*0x14062ea69*/
      v9 = *(_QWORD *)(v5 + 80); /*0x14062ea6e*/
      v10 = *(_QWORD *)(v5 + 88); /*0x14062ea72*/
      v11 = _mm_loadu_si128((const __m128i *)(v5 + 48)); /*0x14062ea7c*/
      *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)(v5 + 32)); /*0x14062ea82*/
      *(__m128i *)(v5 + 16) = v11; /*0x14062ea87*/
      sub_140669440(&v148, v8); /*0x14062ea91*/
      v12 = v208; /*0x14062ea97*/
      *(_BYTE *)(v208 + 144) = 1; /*0x14062ea9e*/
      v13 = *(_QWORD *)(v12 + 96); /*0x14062eaa5*/
      if ( *(_BYTE *)(*(_QWORD *)(v12 + 104) + 229LL) == 1 ) /*0x14062eab4*/
      {
        v14 = *(_QWORD *)(v13 + 32); /*0x14062eab6*/
        v15 = *(_DWORD *)(v14 + 16); /*0x14062eabe*/
        if ( v15 > 0x3FFFFFFD /*0x14062ead5*/
          || (v18 = *(_DWORD *)(v14 + 16),
              v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 16), v15 + 1, v15),
              v16 = __OFSUB__(v18, v17),
              v18 != v17) )
        {
          sub_1416C1680((volatile void *)(v14 + 16)); /*0x14062fc64*/
        }
        v19 = _InterlockedIncrement64(*(volatile signed __int64 **)(v14 + 32)); /*0x14062eae4*/
        if ( (v19 < 0) ^ v16 | (v19 == 0) ) /*0x14062eae8*/
          goto LABEL_136; /*0x14062eae8*/
        v20 = *(_QWORD *)(v14 + 32); /*0x14062eaee*/
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v14 + 16)) & 0xBFFFFFFF), 1) ) /*0x14062eb06*/
LABEL_12:
          sub_1416C1970(v14 + 16); /*0x140630001*/
      }
      else
      {
        v14 = *(_QWORD *)(v13 + 24); /*0x14062eb15*/
        v21 = *(_DWORD *)(v14 + 16); /*0x14062eb1d*/
        if ( v21 > 0x3FFFFFFD /*0x14062eb34*/
          || (v24 = *(_DWORD *)(v14 + 16),
              v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 16), v21 + 1, v21),
              v22 = __OFSUB__(v24, v23),
              v24 != v23) )
        {
          sub_1416C1680((volatile void *)(v14 + 16)); /*0x14062fc72*/
        }
        v25 = _InterlockedIncrement64(*(volatile signed __int64 **)(v14 + 32)); /*0x14062eb43*/
        if ( (v25 < 0) ^ v22 | (v25 == 0) ) /*0x14062eb47*/
          goto LABEL_136; /*0x14062eb47*/
        v20 = *(_QWORD *)(v14 + 32); /*0x14062eb4d*/
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v14 + 16)) & 0xBFFFFFFF), 1) ) /*0x14062eb65*/
          goto LABEL_12; /*0x14062eb67*/
      }
      *(_QWORD *)(v208 + 112) = v20; /*0x14062eb6d*/
      sub_1405A48C0((unsigned int)v192, v20, (unsigned int)&unk_141764700, v9, v10); /*0x14062eb91*/
      *(_BYTE *)(v208 + 144) = 0; /*0x14062eb9e*/
      v183 = v151[2]; /*0x14062eba9*/
      v182 = v151[1]; /*0x14062ebb4*/
      v26 = _mm_loadu_si128(&v148); /*0x14062ebbb*/
      v27 = _mm_loadu_si128(&v149); /*0x14062ebc0*/
      v28 = _mm_loadu_si128(&v150); /*0x14062ebc5*/
      v181 = _mm_loadu_si128(v151); /*0x14062ebcf*/
      *(__m128i *)&v180.m256i_u64[2] = v28; /*0x14062ebd7*/
      *(__m128i *)v180.m256i_i8 = v27; /*0x14062ebdf*/
      v179 = v26; /*0x14062ebe7*/
      sub_14103C250(&v160, v192, &v179); /*0x14062ec04*/
      sub_1406C67E0(v192, &v160, v208); /*0x14062ec1f*/
      v29 = sub_14103C180(v192); /*0x14062ec2c*/
      v5 = v208; /*0x14062ec32*/
      *(_QWORD *)(v208 + 64) = v29; /*0x14062ec39*/
      *(_QWORD *)(v5 + 72) = v30; /*0x14062ec3d*/
LABEL_14:
      v212 = (__int64 (__fastcall **)())(v5 + 64); /*0x14062ec41*/
      sub_14104DCF0(v192, v5 + 64, a3); /*0x14062ec56*/
      v31 = *(_QWORD *)v192; /*0x14062ec5c*/
      if ( *(_QWORD *)v192 != -2 ) /*0x14062ec67*/
      {
        v33 = *(_QWORD *)&v192[8]; /*0x14062ec77*/
        v152 = *(__m128i *)&v192[16]; /*0x14062ec85*/
        v153 = *(__m128i *)&v192[32]; /*0x14062ec90*/
        v154 = *(__m128i *)&v192[48]; /*0x14062ec9b*/
        v155 = *(__m128i *)&v192[64]; /*0x14062eca6*/
        v156 = *(_OWORD *)&v192[80]; /*0x14062ecb1*/
        v157 = *(_OWORD *)&v192[96]; /*0x14062ecbc*/
        v158 = _mm_loadu_si128(&v193); /*0x14062ecc8*/
        v159 = v194; /*0x14062ecd4*/
        sub_1405E6830(v212); /*0x14062ece2*/
        if ( (_DWORD)v31 == -1 ) /*0x14062eceb*/
        {
          v201 = v33; /*0x14062edbd*/
          sub_140660A60(*(_QWORD *)(v208 + 96)); /*0x14062edcf*/
          v160.m128i_i64[0] = (__int64)&v201; /*0x14062eddc*/
          v160.m128i_i64[1] = (__int64)sub_141031F10; /*0x14062edea*/
          sub_14149C0F0(v192, &unk_141767F78, &v160); /*0x14062ee06*/
          v210 = *(_QWORD *)&v192[8]; /*0x14062ee21*/
          v212 = *(__int64 (__fastcall ***)())v192; /*0x14062ee21*/
          v42 = *(volatile signed __int64 **)&v192[16]; /*0x14062ee28*/
          v179.m128i_i64[0] = (__int64)&v201; /*0x14062ee2f*/
          v179.m128i_i64[1] = (__int64)sub_141031F10; /*0x14062ee36*/
          sub_14149C0F0(&v160, &unk_141767F78, &v179); /*0x14062ee52*/
          v207 = v160.m128i_i64[0]; /*0x14062ee66*/
          LOWORD(v43) = 502; /*0x14062ee90*/
          v205 = v160.m128i_i64[1]; /*0x14062ee94*/
          sub_14066B160((unsigned int)v192, v43, v160.m128i_i32[2], v161.m128i_i32[0], (__int64)aProxyUpstream, 14); /*0x14062ee9b*/
          v44 = *(_QWORD *)v192; /*0x14062eea1*/
          v184 = *(_OWORD *)&v192[8]; /*0x14062eeaf*/
          v185 = *(__m128i *)&v192[24]; /*0x14062eebd*/
          v186 = *(__m128i *)&v192[40]; /*0x14062eecb*/
          v187 = *(__m128i *)&v192[56]; /*0x14062eed9*/
          v188 = *(_OWORD *)&v192[72]; /*0x14062eee7*/
          v189 = *(_OWORD *)&v192[88]; /*0x14062eef5*/
          v190 = _mm_loadu_si128((const __m128i *)&v192[104]); /*0x14062ef04*/
          v191 = v193.m128i_i64[1]; /*0x14062ef13*/
          if ( v207 ) /*0x14062ef24*/
            sub_140001660(v205, v207, 1); /*0x14062ef33*/
          sub_1405E12D0(&v201); /*0x14062ef40*/
          v45 = v212; /*0x14062ef46*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v208 + 112)) ) /*0x14062ef58*/
            goto LABEL_40; /*0x14062ef5c*/
LABEL_39:
          sub_141018B80(v208 + 112); /*0x14062f2c7*/
LABEL_40:
          v57 = v208; /*0x14062f2d8*/
          *(_BYTE *)(v208 + 144) = 0; /*0x14062f2df*/
          sub_1400104F0(v57); /*0x14062f2e6*/
          v58 = v210; /*0x14062f2ec*/
LABEL_41:
          *(_QWORD *)a1 = v44; /*0x14062f2f3*/
          v59 = _mm_load_si128(&v185); /*0x14062f2fd*/
          v60 = _mm_load_si128(&v186); /*0x14062f305*/
          v61 = _mm_load_si128(&v187); /*0x14062f30d*/
          *(_OWORD *)(a1 + 8) = v184; /*0x14062f315*/
          *(__m128i *)(a1 + 24) = v59; /*0x14062f319*/
          *(__m128i *)(a1 + 40) = v60; /*0x14062f31e*/
          *(__m128i *)(a1 + 56) = v61; /*0x14062f323*/
          *(_OWORD *)(a1 + 72) = v188; /*0x14062f32f*/
          *(_OWORD *)(a1 + 88) = v189; /*0x14062f33a*/
          *(__m128i *)(a1 + 104) = _mm_load_si128(&v190); /*0x14062f346*/
          *(_QWORD *)(a1 + 120) = v191; /*0x14062f352*/
          *(_QWORD *)(a1 + 128) = v45; /*0x14062f356*/
          *(_QWORD *)(a1 + 136) = v58; /*0x14062f35d*/
          *(_QWORD *)(a1 + 144) = v42; /*0x14062f364*/
          result = 1; /*0x14062f36b*/
          goto LABEL_42; /*0x14062f36b*/
        }
        v173 = v159; /*0x14062ecf8*/
        v172 = v158; /*0x14062ed03*/
        v171 = v157; /*0x14062ed0e*/
        v170 = v156; /*0x14062ed19*/
        v34 = _mm_load_si128(&v152); /*0x14062ed20*/
        v35 = _mm_load_si128(&v153); /*0x14062ed25*/
        v36 = _mm_load_si128(&v154); /*0x14062ed2a*/
        v169 = _mm_load_si128(&v155); /*0x14062ed34*/
        v168 = v36; /*0x14062ed3c*/
        v167[1] = v35; /*0x14062ed44*/
        v167[0] = v34; /*0x14062ed4c*/
        v166.m128i_i64[0] = v31; /*0x14062ed54*/
        v166.m128i_i64[1] = v33; /*0x14062ed5b*/
        v37 = WORD4(v157); /*0x14062ed62*/
        v206 = WORD4(v157); /*0x14062ed6a*/
        v38 = v156; /*0x14062ed72*/
        v39 = 4 * v156; /*0x14062ed79*/
        v40 = 0x7FFFFFFFFFFFFFFELL; /*0x14062ed8b*/
        LOBYTE(v40) = (unsigned __int64)v156 >> 62 != 0 || (unsigned __int64)(4 * v156) > 0x7FFFFFFFFFFFFFFELL; /*0x14062ed9b*/
        if ( (_BYTE)v40 ) /*0x14062ed9d*/
        {
          v41 = 0; /*0x14062eda3*/
          goto LABEL_19; /*0x14062eda3*/
        }
        v46 = WORD4(v170); /*0x14062ef67*/
        v207 = 4 * v156; /*0x14062ef72*/
        v212 = (__int64 (__fastcall **)())v156; /*0x14062ef79*/
        if ( v39 ) /*0x14062ef80*/
        {
          v47 = v169.m128i_i64[1]; /*0x14062ef82*/
          nullsub_1(v40); /*0x14062ef89*/
          v41 = 2; /*0x14062ef8e*/
          v48 = sub_140001650(v39, 2); /*0x14062ef9b*/
          if ( !v48 ) /*0x14062efa3*/
          {
LABEL_19:
            v213 = 1; /*0x14062eda5*/
            sub_1416C2D4B(v41, v39); /*0x14062edb2*/
          }
          v210 = v48; /*0x14062efac*/
          if ( v38 ) /*0x14062efb3*/
            sub_141684120(v48, v47, v39); /*0x14062efbe*/
        }
        else
        {
          v210 = 2; /*0x14062efca*/
        }
        sub_14032BA10(&v160, (char *)v167 + 8); /*0x14062efdf*/
        sub_14032B840(v192, &v168); /*0x14062eff3*/
        v183.m128i_i16[4] = v46; /*0x14062eff9*/
        v182.m128i_i64[1] = v210; /*0x14062f008*/
        v183.m128i_i64[0] = (__int64)v212; /*0x14062f016*/
        *(__m128i *)&v180.m256i_u64[1] = v160; /*0x14062f024*/
        v180.m256i_i64[3] = v161.m128i_i64[0]; /*0x14062f032*/
        v181 = *(__m128i *)v192; /*0x14062f040*/
        v182.m128i_i64[0] = *(_QWORD *)&v192[16]; /*0x14062f04e*/
        v179 = _mm_loadu_si128(&v166); /*0x14062f05d*/
        v180.m256i_i64[0] = *(_QWORD *)&v167[0]; /*0x14062f06c*/
        if ( (unsigned __int16)(v37 - 500) < 0x64u /*0x14062f097*/
          || (v49 = (unsigned __int16)v37 - 401, v49 <= 0x1C) && (v50 = 268435917, _bittest(&v50, v49)) )
        {
          v51 = v208; /*0x14062f0a0*/
          v52 = *(_QWORD *)(v208 + 104); /*0x14062f0a7*/
          *(_QWORD *)v192 = &v206; /*0x14062f0b6*/
          *(_QWORD *)&v192[8] = sub_14143ED80; /*0x14062f0c4*/
          *(_QWORD *)&v192[16] = v52 + 24; /*0x14062f0cb*/
          *(_QWORD *)&v192[24] = sub_1400015F0; /*0x14062f0d9*/
          v215 = 1; /*0x14062f0e0*/
          sub_14149C0F0(&v160, &unk_141768089, v192); /*0x14062f0fc*/
          v210 = v160.m128i_i64[1]; /*0x14062f117*/
          v212 = (__int64 (__fastcall **)())v160.m128i_i64[0]; /*0x14062f117*/
          v42 = (volatile signed __int64 *)v161.m128i_i64[0]; /*0x14062f11e*/
          v53 = v206; /*0x14062f125*/
          v54 = *(_QWORD *)(v51 + 104); /*0x14062f12c*/
          v160.m128i_i64[0] = (__int64)&v206; /*0x14062f134*/
          v160.m128i_i64[1] = (__int64)sub_14143ED80; /*0x14062f13b*/
          v161.m128i_i64[0] = v54 + 24; /*0x14062f142*/
          v161.m128i_i64[1] = (__int64)sub_1400015F0; /*0x14062f149*/
          sub_14149C0F0(&v201, &unk_141768089, &v160); /*0x14062f165*/
          v55 = 502; /*0x14062f179*/
          if ( (unsigned __int16)(v53 - 1000) >= 0xFC7Cu ) /*0x14062f17e*/
            v55 = v53; /*0x14062f17e*/
          v207 = v201; /*0x14062f188*/
          v205 = v202.m128i_i64[0]; /*0x14062f1b9*/
          sub_14066B160((unsigned int)v192, v55, v202.m128i_i32[0], v202.m128i_i32[2], (__int64)aProxyUpstream, 14); /*0x14062f1c0*/
          v44 = *(_QWORD *)v192; /*0x14062f1c6*/
          v184 = *(_OWORD *)&v192[8]; /*0x14062f1d4*/
          v185 = *(__m128i *)&v192[24]; /*0x14062f1e2*/
          v186 = *(__m128i *)&v192[40]; /*0x14062f1f0*/
          v187 = *(__m128i *)&v192[56]; /*0x14062f1fe*/
          v188 = *(_OWORD *)&v192[72]; /*0x14062f20c*/
          v189 = *(_OWORD *)&v192[88]; /*0x14062f21a*/
          v190 = _mm_loadu_si128((const __m128i *)&v192[104]); /*0x14062f229*/
          v191 = v193.m128i_i64[1]; /*0x14062f238*/
          if ( v207 ) /*0x14062f249*/
            sub_140001660(v205, v207, 1); /*0x14062f258*/
          v213 = 1; /*0x14062f25d*/
          sub_140017140(&v179); /*0x14062f26b*/
          v45 = v212; /*0x14062f271*/
          sub_1405AE7F0(&v166); /*0x14062f27f*/
          v56 = v173; /*0x14062f285*/
          if ( *v173 ) /*0x14062f28c*/
            sub_140001660(v173[1], *v173, 1); /*0x14062f29e*/
          sub_140001660(v56, 88, 8); /*0x14062f2b1*/
          if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v208 + 112)) ) /*0x14062f2c1*/
            goto LABEL_40; /*0x14062f2c5*/
          goto LABEL_39; /*0x14062f2c5*/
        }
        v215 = 1; /*0x14062f3dc*/
        sub_141442B90(v192); /*0x14062f3ea*/
        v198 = v37 - 200; /*0x14062f3f7*/
        v160 = *(__m128i *)&v192[8]; /*0x14062f40b*/
        v161 = *(__m128i *)&v192[24]; /*0x14062f419*/
        v162 = *(__m128i *)&v192[40]; /*0x14062f427*/
        v163 = *(__m128i *)&v192[56]; /*0x14062f435*/
        v164 = *(_OWORD *)&v192[72]; /*0x14062f443*/
        v165[0] = *(__m128i *)&v192[88]; /*0x14062f451*/
        v62 = *(_WORD *)&v192[104]; /*0x14062f458*/
        LODWORD(v201) = *(_DWORD *)&v192[106]; /*0x14062f465*/
        v63 = *(unsigned __int16 *)&v192[110]; /*0x14062f46b*/
        WORD2(v201) = *(_WORD *)&v192[110]; /*0x14062f472*/
        if ( *(_QWORD *)v192 != -1 ) /*0x14062f47d*/
        {
          v62 = 200; /*0x14062f496*/
          if ( (unsigned __int16)(v37 - 1000) >= 0xFC7Cu ) /*0x14062f49b*/
            v62 = v37; /*0x14062f49b*/
          v165[0] = *(__m128i *)&v192[88]; /*0x14062f4a3*/
          v164 = *(_OWORD *)&v192[72]; /*0x14062f4ae*/
          v64 = _mm_loadu_si128((const __m128i *)&v192[24]); /*0x14062f4b8*/
          v65 = _mm_loadu_si128((const __m128i *)&v192[40]); /*0x14062f4bd*/
          v163 = _mm_loadu_si128((const __m128i *)&v192[56]); /*0x14062f4c7*/
          v162 = v65; /*0x14062f4cf*/
          v161 = v64; /*0x14062f4d7*/
          v160 = *(__m128i *)&v192[8]; /*0x14062f4df*/
          LODWORD(v201) = *(_DWORD *)&v192[106]; /*0x14062f4ea*/
          v63 = *(unsigned __int16 *)&v192[110]; /*0x14062f4f1*/
          WORD2(v201) = *(_WORD *)&v192[110]; /*0x14062f4f5*/
        }
        *(_QWORD *)v178 = *(_QWORD *)v192; /*0x14062f4fc*/
        v66 = _mm_load_si128(&v161); /*0x14062f50a*/
        v67 = _mm_load_si128(&v162); /*0x14062f512*/
        v68 = _mm_load_si128(&v163); /*0x14062f51a*/
        *(__m128i *)&v178[8] = v160; /*0x14062f522*/
        *(__m128i *)&v178[24] = v66; /*0x14062f529*/
        *(__m128i *)&v178[40] = v67; /*0x14062f531*/
        *(__m128i *)&v178[56] = v68; /*0x14062f539*/
        *(_OWORD *)&v178[72] = v164; /*0x14062f548*/
        *(__m128i *)&v178[88] = _mm_load_si128(v165); /*0x14062f557*/
        *(_WORD *)&v178[104] = v62; /*0x14062f55f*/
        *(_DWORD *)&v178[106] = v201; /*0x14062f56c*/
        *(_WORD *)&v178[110] = WORD2(v201); /*0x14062f579*/
        v70 = v180.m256i_u64[3]; /*0x14062f587*/
        v69 = v180.m256i_i64[2]; /*0x14062f587*/
        v71 = v182.m128i_i64[0]; /*0x14062f59f*/
        v177 = v181.m128i_i64[1]; /*0x14062f5ad*/
        v72 = 2 * (unsigned int)(v180.m256i_i64[3] == 0); /*0x14062f5b4*/
        si128 = _mm_load_si128((const __m128i *)&xmmword_141763F20); /*0x14062f5b7*/
        v74 = _mm_cvtsi32_si128(0x6574u); /*0x14062f5c0*/
        v75 = _mm_load_si128((const __m128i *)&xmmword_141763F00); /*0x14062f5c9*/
        v76 = _mm_load_si128((const __m128i *)&xmmword_141763F10); /*0x14062f5d2*/
        v77 = _mm_load_si128((const __m128i *)&xmmword_141742480); /*0x14062f5db*/
        v78 = _mm_load_si128((const __m128i *)&xmmword_141742490); /*0x14062f5e4*/
        v79 = _mm_load_si128((const __m128i *)&xmmword_1417424A0); /*0x14062f5ed*/
        v80 = _mm_load_si128((const __m128i *)&xmmword_141742460); /*0x14062f5f6*/
        v81 = _mm_load_si128((const __m128i *)&xmmword_1416C62F0); /*0x14062f5ff*/
        v82 = _mm_load_si128((const __m128i *)&xmmword_141742470); /*0x14062f607*/
        v83 = 0; /*0x14062f60f*/
        if ( v72 != 2 ) /*0x14062f615*/
          goto LABEL_50; /*0x14062f615*/
LABEL_48:
        ++v83; /*0x14062f617*/
        v84 = v210; /*0x14062f61d*/
        if ( v83 < v70 ) /*0x14062f624*/
        {
          v205 = v83; /*0x14062f62a*/
          v85 = (_QWORD *)(v69 + 104 * v83); /*0x14062f635*/
LABEL_56:
          v87 = 2; /*0x14062f69e*/
          if ( *v85 == 1 ) /*0x14062f6a7*/
          {
            v204 = v85[1]; /*0x14062f6ad*/
            v87 = 1; /*0x14062f6b4*/
          }
          for ( i = v85 + 3; ; i = (_QWORD *)(v86 + 32) ) /*0x14062f6b9*/
          {
            v207 = v87; /*0x14062f6bd*/
            if ( v85[8] ) /*0x14062f6c4*/
            {
              v89 = v85[9]; /*0x14062f6cb*/
              v90 = v85[10]; /*0x14062f6cf*/
            }
            else
            {
              v91 = *((unsigned __int8 *)v85 + 72); /*0x14062f6d5*/
              v92 = v85; /*0x14062f6d9*/
              v93 = i; /*0x14062f6dc*/
              v94 = sub_14065FF80(v91, v87, v84); /*0x14062f6df*/
              i = v93; /*0x14062f6e4*/
              v85 = v92; /*0x14062f6e7*/
              v84 = v210; /*0x14062f6ea*/
              v89 = v94; /*0x14062f6f1*/
            }
            if ( v90 < 0 ) /*0x14062f6f7*/
            {
              v99 = 0; /*0x14062fc3f*/
              goto LABEL_115; /*0x14062fc3f*/
            }
            v212 = (__int64 (__fastcall **)())v90; /*0x14062f6fd*/
            if ( v90 ) /*0x14062f704*/
              break; /*0x14062f704*/
            v210 = 1; /*0x14062f798*/
            v72 = v207; /*0x14062f79f*/
LABEL_77:
            v112 = i[1]; /*0x14062f8da*/
            v113 = i[2]; /*0x14062f8de*/
            if ( v113 ) /*0x14062f8e5*/
            {
              for ( j = 0; v113 != j; ++j ) /*0x14062f8e7*/
              {
                v115 = *(_BYTE *)(v112 + j); /*0x14062f8fc*/
                if ( v115 > 0x1Fu ) /*0x14062f903*/
                {
                  if ( v115 == 127 ) /*0x14062f8ee*/
                    goto LABEL_90; /*0x14062f8ee*/
                }
                else if ( v115 != 9 ) /*0x14062f908*/
                {
                  goto LABEL_90; /*0x14062f908*/
                }
              }
            }
            sub_1414464F0(&v174, v112, v113); /*0x14062f90f*/
            LOBYTE(v176) = 0; /*0x14062f91c*/
            v197 = v176; /*0x14062f92a*/
            v118 = _mm_loadu_si128(&v174); /*0x14062f931*/
            v196 = _mm_loadu_si128(&v175); /*0x14062f941*/
            v195 = v118; /*0x14062f949*/
            if ( v85[8] ) /*0x14062f951*/
            {
              v119 = v85[9]; /*0x14062f958*/
              v120 = v85[10]; /*0x14062f95c*/
            }
            else
            {
              v119 = sub_14065FF80(*((unsigned __int8 *)v85 + 72), v116, v117); /*0x14062f966*/
              v120 = v121; /*0x14062f96b*/
            }
            v209 = 1; /*0x14062f96e*/
            sub_141441C10(&v201, v119, v120); /*0x14062f97f*/
            if ( (_BYTE)v201 ) /*0x14062f98c*/
            {
              v122 = *(void (__fastcall **)(unsigned __int64 *, __int64, __int64))(v195.m128i_i64[0] + 32); /*0x14062f99c*/
              v211 = 1; /*0x14062f9a7*/
              v122(&v196.m128i_u64[1], v195.m128i_i64[1], v196.m128i_i64[0]); /*0x14062f9b5*/
            }
            else
            {
              *(_QWORD *)&v164 = v197; /*0x14062f9cb*/
              v163 = v196; /*0x14062f9dd*/
              v162 = v195; /*0x14062f9e1*/
              v123 = _mm_loadu_si128(&v203); /*0x14062f9ea*/
              v160 = _mm_loadu_si128(&v202); /*0x14062f9f0*/
              v161 = v123; /*0x14062f9f8*/
              v209 = 0; /*0x14062fa00*/
              sub_1406C4A30(v192, v178, &v160); /*0x14062fa1c*/
              v124 = _mm_loadu_si128((const __m128i *)&v192[16]); /*0x14062fa29*/
              v125 = _mm_loadu_si128((const __m128i *)&v192[32]); /*0x14062fa31*/
              v126 = _mm_loadu_si128((const __m128i *)&v192[48]); /*0x14062fa39*/
              *(_OWORD *)v178 = *(_OWORD *)v192; /*0x14062fa41*/
              *(__m128i *)&v178[16] = v124; /*0x14062fa48*/
              *(__m128i *)&v178[32] = v125; /*0x14062fa50*/
              *(__m128i *)&v178[48] = v126; /*0x14062fa58*/
              *(_OWORD *)&v178[64] = *(_OWORD *)&v192[64]; /*0x14062fa67*/
              *(_OWORD *)&v178[80] = *(_OWORD *)&v192[80]; /*0x14062fa75*/
              *(__m128i *)&v178[96] = _mm_loadu_si128((const __m128i *)&v192[96]); /*0x14062fa84*/
            }
LABEL_90:
            v103 = (unsigned __int64)v212; /*0x14062fa8c*/
            if ( v212 ) /*0x14062fa96*/
            {
              v127 = v210; /*0x14062fa9e*/
LABEL_92:
              sub_140001660(v127, v103, 1); /*0x14062faa5*/
            }
            v83 = v205; /*0x14062faaa*/
            v63 = v204; /*0x14062fab1*/
            if ( v72 == 2 ) /*0x14062fabc*/
              goto LABEL_48; /*0x14062fabc*/
LABEL_50:
            v84 = v210; /*0x14062f63a*/
            if ( v83 >= v70 ) /*0x14062f644*/
            {
              v217 = 1; /*0x140630073*/
              v216 = 1; /*0x14063007a*/
              sub_1416C30E3(v83, v70, &off_141790C68); /*0x14063008b*/
            }
            v85 = (_QWORD *)(v69 + 104 * v83); /*0x14062f64e*/
            v205 = v83; /*0x14062f654*/
            if ( !v72 ) /*0x14062f65b*/
              goto LABEL_56; /*0x14062f65b*/
            if ( v63 >= v71 ) /*0x14062f660*/
            {
              v217 = 1; /*0x140630093*/
              v216 = 1; /*0x14063009a*/
              sub_1416C30E3(v63, v71, &off_141790C80); /*0x1406300ae*/
            }
            v204 = v63; /*0x14062f666*/
            v83 = v177; /*0x14062f671*/
            v86 = v177 + 72 * v63; /*0x14062f678*/
            v87 = 2; /*0x14062f67c*/
            if ( *(_BYTE *)(v86 + 16) ) /*0x14062f681*/
            {
              v204 = *(_QWORD *)(v86 + 24); /*0x14062f68c*/
              v87 = 1; /*0x14062f693*/
            }
          }
          v200 = v85; /*0x14062f70a*/
          v95 = i; /*0x14062f711*/
          v199 = v69; /*0x14062f714*/
          v96 = v71; /*0x14062f71b*/
          v97 = v70; /*0x14062f71e*/
          v98 = v90; /*0x14062f721*/
          nullsub_1(v83); /*0x14062f724*/
          v99 = 1; /*0x14062f729*/
          v100 = sub_140001650(v98, 1); /*0x14062f737*/
          if ( !v100 ) /*0x14062f73f*/
          {
            v84 = v98; /*0x1406300b6*/
LABEL_115:
            v217 = 1; /*0x14062fc42*/
            v216 = 1; /*0x14062fc49*/
            sub_1416C2D4B(v99, v84); /*0x14062fc56*/
          }
          v210 = v100; /*0x14062f745*/
          sub_141684120(v100, v89, v98); /*0x14062f755*/
          if ( v98 < 8 ) /*0x14062f75e*/
          {
            v101 = 0; /*0x14062f760*/
            v70 = v97; /*0x14062f762*/
            v71 = v96; /*0x14062f765*/
            v69 = v199; /*0x14062f768*/
            v102 = v210; /*0x14062f776*/
            v72 = v207; /*0x14062f77d*/
            i = v95; /*0x14062f784*/
            v85 = v200; /*0x14062f787*/
            goto LABEL_95; /*0x14062f78e*/
          }
          v103 = v98; /*0x14062f7ab*/
          v70 = v97; /*0x14062f7b2*/
          v72 = v207; /*0x14062f7b5*/
          i = v95; /*0x14062f7bc*/
          if ( v98 < 0x20 ) /*0x14062f7bf*/
          {
            v101 = 0; /*0x14062f7c1*/
            v71 = v96; /*0x14062f7c3*/
            v69 = v199; /*0x14062f7c6*/
            v102 = v210; /*0x14062f7d4*/
            v85 = v200; /*0x14062f7db*/
LABEL_74:
            v109 = v101; /*0x14062f887*/
            v101 = v98 & 0x7FFFFFFFFFFFFFF8LL; /*0x14062f897*/
            do /*0x14062f8cc*/
            {
              v110 = _mm_loadl_epi64((const __m128i *)(v102 + v109)); /*0x14062f89a*/
              v111 = _mm_add_epi8(v110, v77); /*0x14062f8a4*/
              *(_QWORD *)(v102 + v109) = _mm_or_si128( /*0x14062f8bf*/
                                           _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v111, v78), v111), v79),
                                           v110).m128i_u64[0];
              v109 += 8; /*0x14062f8c5*/
            }
            while ( v101 != v109 ); /*0x14062f8cc*/
            v103 = (unsigned __int64)v212; /*0x14062f8ce*/
            goto LABEL_96; /*0x14062f8d5*/
          }
          v101 = v98 & 0x7FFFFFFFFFFFFFE0LL; /*0x14062f7f4*/
          v104 = 0; /*0x14062f7f7*/
          v71 = v96; /*0x14062f7f9*/
          v102 = v210; /*0x14062f7fc*/
          v85 = v200; /*0x14062f803*/
          do /*0x14062f865*/
          {
            v105 = _mm_loadu_si128((const __m128i *)(v102 + v104)); /*0x14062f80a*/
            v106 = _mm_loadu_si128((const __m128i *)(v102 + v104 + 16)); /*0x14062f810*/
            v107 = _mm_add_epi8(v105, v80); /*0x14062f81b*/
            v108 = _mm_add_epi8(v106, v80); /*0x14062f824*/
            *(__m128i *)(v102 + v104) = _mm_or_si128( /*0x14062f851*/
                                          _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v107, v81), v107), v82),
                                          v105);
            *(__m128i *)(v102 + v104 + 16) = _mm_or_si128( /*0x14062f857*/
                                               _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v108, v81), v108), v82),
                                               v106);
            v104 += 32; /*0x14062f85e*/
          }
          while ( v101 != v104 ); /*0x14062f865*/
          v69 = v199; /*0x14062f86a*/
          if ( v98 != v101 ) /*0x14062f878*/
          {
            if ( (v98 & 0x18) != 0 ) /*0x14062f881*/
              goto LABEL_74; /*0x14062f881*/
            do /*0x14062faeb*/
            {
LABEL_95:
              *(_BYTE *)(v102 + v101) |= 32 * ((unsigned __int8)(*(_BYTE *)(v102 + v101) - 65) < 0x1Au); /*0x14062fac7*/
              v103 = (unsigned __int64)v212; /*0x14062fade*/
              ++v101; /*0x14062fae5*/
LABEL_96:
              ; /*0x14062fae8*/
            }
            while ( v103 != v101 ); /*0x14062faeb*/
          }
          switch ( v103 ) /*0x14062fb09*/
          {
            case 2uLL: /*0x14062fb09*/
              if ( *(_WORD *)v102 != 25972 ) /*0x14062fb11*/
                goto LABEL_77; /*0x14062fb11*/
              goto LABEL_113; /*0x14062fb11*/
            case 7uLL: /*0x14062fb09*/
              v103 = (unsigned __int64)v212; /*0x14062fb51*/
              if ( *(_DWORD *)v102 ^ 0x72677075 | *(_DWORD *)(v102 + 3) ^ 0x65646172 ) /*0x14062fb58*/
                goto LABEL_77; /*0x14062fb5a*/
              goto LABEL_113; /*0x14062fb5a*/
            case 8uLL: /*0x14062fb09*/
              if ( *(_QWORD *)v102 != 0x7372656C69617274LL ) /*0x14062fbb9*/
                goto LABEL_77; /*0x14062fbb9*/
              goto LABEL_113; /*0x14062fbb9*/
            case 0xAuLL: /*0x14062fb09*/
              if ( !(*(_QWORD *)v102 ^ 0x697463656E6E6F63LL | *(unsigned __int16 *)(v102 + 8) ^ 0x6E6FLL) ) /*0x14062fbe0*/
                goto LABEL_113; /*0x14062fbe0*/
              v130 = *(_QWORD *)v102 ^ 0x696C612D7065656BLL; /*0x14062fbef*/
              v131 = *(unsigned __int16 *)(v102 + 8) ^ 0x6576LL; /*0x14062fbf7*/
LABEL_112:
              if ( !(v130 | v131) ) /*0x14062fc28*/
                goto LABEL_113; /*0x14062fc2b*/
              goto LABEL_77; /*0x14062fc2b*/
            case 0xEuLL: /*0x14062fb09*/
              v130 = *(_QWORD *)v102 ^ 0x2D746E65746E6F63LL; /*0x14062fc0d*/
              v131 = *(_QWORD *)(v102 + 6) ^ 0x6874676E656C2D74LL; /*0x14062fc1e*/
              v103 = (unsigned __int64)v212; /*0x14062fc21*/
              goto LABEL_112; /*0x14062fc21*/
            case 0x11uLL: /*0x14062fb09*/
              v128 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v102), (__m128i)xmmword_141763F40); /*0x14062fb21*/
              v129 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int8 *)(v102 + 16)), (__m128i)xmmword_141763F50); /*0x14062fb32*/
              goto LABEL_105; /*0x14062fb3a*/
            case 0x12uLL: /*0x14062fb09*/
              v128 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v102), si128); /*0x14062fb6a*/
              v129 = _mm_cmpeq_epi8(_mm_cvtsi32_si128(*(unsigned __int16 *)(v102 + 16)), v74); /*0x14062fb78*/
              goto LABEL_105; /*0x14062fb7d*/
            case 0x13uLL: /*0x14062fb09*/
              v128 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v102), v76); /*0x14062fb84*/
              v129 = _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v102 + 3)), v75); /*0x14062fb8f*/
LABEL_105:
              if ( _mm_movemask_epi8(_mm_and_si128(v129, v128)) != 0xFFFF ) /*0x14062fba1*/
                goto LABEL_77; /*0x14062fba1*/
LABEL_113:
              v127 = v102; /*0x14062fc31*/
              break; /*0x14062fc3a*/
            default:
              goto LABEL_77;
          }
          goto LABEL_92; /*0x14062fc3a*/
        }
        sub_141684120(v192, &v166, 136); /*0x14062fc94*/
        v217 = 1; /*0x14062fc99*/
        v216 = 0; /*0x14062fca0*/
        v210 = sub_140EA3B00(v192); /*0x14062fcaf*/
        v212 = v133; /*0x14062fcb6*/
        v134 = v208; /*0x14062fcbd*/
        v135 = **(volatile signed __int64 ***)(v208 + 96); /*0x14062fcc8*/
        v136 = _InterlockedIncrement64(v135); /*0x14062fccb*/
        if ( !((v136 < 0) ^ v132 | (v136 == 0)) ) /*0x14062fccf*/
        {
          v174.m128i_i64[0] = (__int64)v135; /*0x14062fcd5*/
          v42 = *(volatile signed __int64 **)(*(_QWORD *)(v134 + 96) + 8LL); /*0x14062fce0*/
          v137 = _InterlockedIncrement64(v42); /*0x14062fce4*/
          if ( !((v137 < 0) ^ v132 | (v137 == 0)) ) /*0x14062fce8*/
          {
            v195.m128i_i64[0] = (__int64)v42; /*0x14062fcee*/
            v138 = *(_QWORD *)(v134 + 104); /*0x14062fcf5*/
            v214 = 1; /*0x14062fcf9*/
            sub_14149C500(v192, v138); /*0x14062fd07*/
            v201 = (__int64)v135; /*0x14062fd0d*/
            v160.m128i_i64[0] = (__int64)v42; /*0x14062fd14*/
            nullsub_1(v139); /*0x14062fd1b*/
            v140 = sub_140001650(24, 8); /*0x14062fd2a*/
            if ( !v140 ) /*0x14062fd32*/
            {
              v207 = (__int64)v42; /*0x14063003d*/
              sub_1416C2D31(8, 24); /*0x14063004e*/
            }
            *(_QWORD *)v140 = 1; /*0x14062fd38*/
            *(_QWORD *)(v140 + 8) = 1; /*0x14062fd3f*/
            *(_BYTE *)(v140 + 16) = 0; /*0x14062fd47*/
            if ( *(_QWORD *)v192 == -1 ) /*0x14062fd56*/
            {
              v217 = 1; /*0x140630056*/
              v216 = 0; /*0x14063005d*/
              sub_1416C3040(&off_1417B3BC8); /*0x14063006b*/
            }
            *(_QWORD *)&v192[24] = v140; /*0x14062fd63*/
            *(_QWORD *)&v192[32] = &unk_141768008; /*0x14062fd71*/
            *(_QWORD *)&v192[40] = 32; /*0x14062fd78*/
            *(_QWORD *)&v192[48] = v42; /*0x14062fd83*/
            *(_QWORD *)&v192[56] = v135; /*0x14062fd8a*/
            *(_QWORD *)&v192[64] = v210; /*0x14062fd98*/
            *(_QWORD *)&v192[72] = v212; /*0x14062fda6*/
            nullsub_1(*(_QWORD *)v192); /*0x14062fdbb*/
            v141 = (__int64 (__fastcall **)())sub_140001650(80, 8); /*0x14062fdca*/
            if ( !v141 ) /*0x14062fdd2*/
              sub_1416C2D31(8, 80); /*0x140630035*/
            *((_OWORD *)v141 + 4) = *(_OWORD *)&v192[64]; /*0x14062fddf*/
            v142 = *(_OWORD *)v192; /*0x14062fde3*/
            v143 = *(_OWORD *)&v192[16]; /*0x14062fdea*/
            v144 = *(_OWORD *)&v192[32]; /*0x14062fdf1*/
            *((_OWORD *)v141 + 3) = *(_OWORD *)&v192[48]; /*0x14062fdff*/
            *((_OWORD *)v141 + 2) = v144; /*0x14062fe03*/
            *((_OWORD *)v141 + 1) = v143; /*0x14062fe07*/
            *(_OWORD *)v141 = v142; /*0x14062fe0b*/
            if ( *(_QWORD *)v178 == -1 ) /*0x14062fe19*/
            {
              v212 = v141; /*0x14062fead*/
              sub_140B22C80(v141); /*0x14062feb7*/
              sub_140001660(v212, 80, 8); /*0x14062fecf*/
              v217 = 0; /*0x14062fed4*/
              v216 = 0; /*0x14062fedb*/
              LOWORD(v145) = 500; /*0x14062ff0b*/
              sub_14066B160((unsigned int)v192, v145, (unsigned int)aBuildStreaming, 27, (__int64)aProxyUpstream, 14); /*0x14062ff0f*/
              v45 = (__int64 (__fastcall **)())v193.m128i_i64[1]; /*0x14062ff15*/
            }
            else
            {
              *(_OWORD *)&v192[10] = *(_OWORD *)&v178[10]; /*0x14062fe2d*/
              *(_OWORD *)&v192[26] = *(_OWORD *)&v178[26]; /*0x14062fe3b*/
              *(_OWORD *)&v192[42] = *(_OWORD *)&v178[42]; /*0x14062fe49*/
              *(_OWORD *)&v192[58] = *(_OWORD *)&v178[58]; /*0x14062fe57*/
              *(_OWORD *)&v192[74] = *(_OWORD *)&v178[74]; /*0x14062fe65*/
              *(_OWORD *)&v192[90] = *(_OWORD *)&v178[90]; /*0x14062fe73*/
              *(_QWORD *)&v192[104] = *(_QWORD *)&v178[104]; /*0x14062fe81*/
              *(_QWORD *)v192 = *(_QWORD *)v178; /*0x14062fe88*/
              *(_WORD *)&v192[8] = *(_WORD *)&v178[8]; /*0x14062fe8f*/
              v193.m128i_i64[0] = (__int64)v141; /*0x14062fe96*/
              v45 = &off_1417B3BE0; /*0x14062fe9d*/
              v193.m128i_i64[1] = (__int64)&off_1417B3BE0; /*0x14062fea4*/
            }
            v146 = 0; /*0x14062ff1c*/
            LOBYTE(v42) = (unsigned __int16)v198 >= 0x64u; /*0x14062ff26*/
            v191 = v193.m128i_i64[0]; /*0x14062ff30*/
            v190 = *(__m128i *)&v192[96]; /*0x14062ff45*/
            v189 = *(_OWORD *)&v192[80]; /*0x14062ff5a*/
            v188 = *(_OWORD *)&v192[64]; /*0x14062ff68*/
            v187 = *(__m128i *)&v192[48]; /*0x14062ff8b*/
            v186 = *(__m128i *)&v192[32]; /*0x14062ff92*/
            v185 = *(__m128i *)&v192[16]; /*0x14062ff99*/
            v184 = *(_OWORD *)v192; /*0x14062ffa0*/
            v213 = 0; /*0x14062ffa7*/
            sub_140017140(&v179); /*0x14062ffb5*/
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v208 + 112)) ) /*0x14062ffc6*/
              sub_141018B80(v208 + 112); /*0x14062ffd7*/
            v147 = v208; /*0x14062ffdd*/
            *(_BYTE *)(v208 + 144) = 0; /*0x14062ffe4*/
            sub_1400104F0(v147); /*0x14062ffeb*/
            LOBYTE(v146) = (_BYTE)v42; /*0x14062fff1*/
            v44 = 2 * v146 + 3; /*0x14062fff4*/
            goto LABEL_41; /*0x14062fffc*/
          }
        }
LABEL_136:
        BUG(); /*0x1406300b4*/
      }
      *(_QWORD *)a1 = -1; /*0x14062ec69*/
      result = 3; /*0x14062ec70*/
LABEL_42:
      *(_BYTE *)(v208 + 145) = result; /*0x14062f36d*/
      return result;
    case 1LL: /*0x14062ea53*/
      sub_1416C3400(&off_141767FF0, a2, a2, a4); /*0x140630024*/
    case 2LL: /*0x14062ea53*/
      sub_1416C3420(&off_141767FF0, a2, a2, a4); /*0x140630016*/
    case 3LL: /*0x14062ea53*/
      goto LABEL_14;
  }
}
