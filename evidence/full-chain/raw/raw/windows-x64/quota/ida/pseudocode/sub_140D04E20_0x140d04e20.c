// module: codexmate_lib/core/relay/quota
// addr: 0x140d04e20
// name: sub_140D04E20
// win 1.2.1 | module src/core/relay/quota.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D04E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int128 *v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r14
  __int16 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  char result; // al
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rdx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  __int64 v29; // rbx
  char v30; // r13
  __int16 v31; // r14
  __int64 v32; // r14
  __int16 v33; // r15
  __int64 v34; // r12
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  __int16 v37; // cx
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // [rsp+30h] [rbp-50h] BYREF
  __int128 v41; // [rsp+38h] [rbp-48h]
  __int128 v42; // [rsp+140h] [rbp+C0h] BYREF
  _OWORD v43[16]; // [rsp+150h] [rbp+D0h]
  __int128 v44; // [rsp+250h] [rbp+1D0h]
  __int128 v45; // [rsp+260h] [rbp+1E0h]
  __int128 v46; // [rsp+270h] [rbp+1F0h]
  __int128 v47; // [rsp+280h] [rbp+200h]
  __int128 v48; // [rsp+290h] [rbp+210h]
  __int128 v49; // [rsp+2A0h] [rbp+220h]
  __int128 v50; // [rsp+2B0h] [rbp+230h]
  __int128 v51; // [rsp+2C0h] [rbp+240h]
  __int128 v52; // [rsp+2D0h] [rbp+250h] BYREF
  __int64 v53; // [rsp+2E0h] [rbp+260h]
  __int128 v54; // [rsp+2E8h] [rbp+268h]
  __int64 v55; // [rsp+2F8h] [rbp+278h]
  __int128 v56; // [rsp+300h] [rbp+280h]
  __int64 v57; // [rsp+310h] [rbp+290h]
  __int64 v58; // [rsp+318h] [rbp+298h]
  __int64 v59; // [rsp+320h] [rbp+2A0h]
  __int16 v60; // [rsp+328h] [rbp+2A8h]
  __int64 v61; // [rsp+338h] [rbp+2B8h]
  __int128 v62; // [rsp+340h] [rbp+2C0h]
  __int128 v63; // [rsp+350h] [rbp+2D0h] BYREF
  __int64 v64; // [rsp+360h] [rbp+2E0h]
  __int64 v65; // [rsp+368h] [rbp+2E8h]
  __int64 v66; // [rsp+370h] [rbp+2F0h]
  char v67; // [rsp+37Fh] [rbp+2FFh] BYREF
  __int64 v68; // [rsp+380h] [rbp+300h]
  char v69; // [rsp+38Fh] [rbp+30Fh]
  __int64 v70; // [rsp+390h] [rbp+310h]

  v70 = -2;
  v6 = *(unsigned __int8 *)(a2 + 48);
  v68 = a2;
  switch ( v6 )
  {
    case 0LL:
      v7 = *(_QWORD *)(a2 + 24);
      v8 = *(_QWORD *)(a2 + 32);
      v9 = *(__int128 **)(a2 + 40);
      sub_1405A48C0(
        (unsigned int)&v42,
        **(_QWORD **)a2,
        (unsigned int)&unk_1417646E8,
        *(_QWORD *)(a2 + 8),
        *(_QWORD *)(a2 + 16));
      sub_1406C6260(&v40, &v42, v7, v8);
      v10 = *((_QWORD *)v9 + 10);
      v11 = 4 * v10;
      v12 = 0x7FFFFFFFFFFFFFFELL;
      LOBYTE(v12) = v10 >> 62 != 0 || 4 * v10 > 0x7FFFFFFFFFFFFFFELL;
      if ( (_BYTE)v12 )
      {
        v13 = 0;
        goto LABEL_4;
      }
      v66 = *((_QWORD *)v9 + 10);
      v14 = *((_WORD *)v9 + 44);
      v61 = 4 * v10;
      if ( v11 )
      {
        v15 = *((_QWORD *)v9 + 9);
        nullsub_1(v12);
        v13 = 2;
        v16 = sub_140001650(v11, 2);
        if ( !v16 )
        {
LABEL_4:
          v69 = 1;
          sub_1416C2D4B(v13, v11);
        }
        v65 = v16;
        if ( v66 )
          sub_141684120(v16, v15, v11);
      }
      else
      {
        v65 = 2;
      }
      sub_14032BA10(&v63, (char *)v9 + 24);
      sub_14032B840(&v42, v9 + 3);
      v60 = v14;
      v58 = v65;
      v59 = v66;
      v54 = v63;
      v55 = v64;
      v57 = *(_QWORD *)&v43[0];
      v56 = v42;
      v52 = *v9;
      v53 = *((_QWORD *)v9 + 2);
      v69 = 0;
      sub_14103C250(&v42, &v40, &v52);
      v17 = sub_14103C180(&v42);
      v18 = v68;
      *(_QWORD *)(v68 + 56) = v17;
      *(_QWORD *)(v18 + 64) = v19;
      a2 = v18;
LABEL_11:
      sub_14104DCF0(&v42, a2 + 56, a3);
      v20 = v42;
      if ( (_QWORD)v42 == -2 )
      {
        *(_QWORD *)a1 = 2;
        result = 3;
LABEL_18:
        v32 = v68;
        goto LABEL_37;
      }
      v22 = *((_QWORD *)&v42 + 1);
      v23 = *(_QWORD *)&v43[0];
      v45 = *(_OWORD *)((char *)v43 + 8);
      v46 = *(_OWORD *)((char *)&v43[1] + 8);
      v47 = *(_OWORD *)((char *)&v43[2] + 8);
      v48 = *(_OWORD *)((char *)&v43[3] + 8);
      v49 = *(_OWORD *)((char *)&v43[4] + 8);
      v50 = *(_OWORD *)((char *)&v43[5] + 8);
      v51 = *(_OWORD *)((char *)&v43[6] + 8);
      sub_140BF25D0(*(_QWORD *)(v68 + 56), *(_QWORD *)(v68 + 64));
      if ( (_DWORD)v20 == -1 )
      {
        v66 = v22;
        *(_QWORD *)&v63 = v22;
        v40 = nullptr;
        v41 = 1u;
        *(_QWORD *)&v43[0] = 1610612768;
        *(_QWORD *)&v42 = &v40;
        *((_QWORD *)&v42 + 1) = &off_1417C41C0;
        if ( (unsigned __int8)sub_141031F10(&v63, &v42) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v67,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v35 = v40;
        v52 = v41;
        sub_140528900(v66);
        v62 = v52;
        v37 = 1;
        goto LABEL_34;
      }
      v24 = v68;
      v25 = v68 + 64;
      *(_QWORD *)(v68 + 64) = v20;
      *(_QWORD *)(v24 + 72) = v22;
      *(_QWORD *)(v24 + 80) = v23;
      *(_OWORD *)(v24 + 88) = v45;
      *(_OWORD *)(v24 + 168) = v50;
      v26 = v47;
      v27 = v48;
      v28 = v49;
      *(_OWORD *)(v24 + 104) = v46;
      *(_OWORD *)(v24 + 120) = v26;
      *(_OWORD *)(v24 + 136) = v27;
      *(_OWORD *)(v24 + 152) = v28;
      *(_OWORD *)(v24 + 184) = v51;
      LODWORD(v20) = *(_DWORD *)(v24 + 168);
      *(_WORD *)(v24 + 56) = v20;
      if ( (unsigned __int16)(v20 - 200) < 0x64u )
      {
        v29 = v24;
        sub_141684120(v24 + 200, v25, 136);
        a2 = v29;
        *(_BYTE *)(v29 + 760) = 0;
LABEL_16:
        v66 = a2 + 200;
        sub_140BF3A10(&v42, a2 + 200, a3);
        v30 = v42;
        v31 = (unsigned __int8)v42;
        if ( (unsigned __int8)v42 == 254 )
        {
          *(_QWORD *)a1 = 2;
          result = 4;
          goto LABEL_18;
        }
        v33 = BYTE1(v42);
        v34 = *(unsigned int *)((char *)&v42 + 2);
        v20 = WORD3(v42);
        v35 = *((_QWORD **)&v42 + 1);
        v44 = v43[0];
        if ( *(_BYTE *)(v68 + 760) == 3 )
        {
          sub_140BE80E0(v68 + 336);
        }
        else if ( !*(_BYTE *)(v68 + 760) )
        {
          v65 = *((_QWORD *)&v42 + 1);
          sub_140BA5F10(v66);
          v36 = *(_QWORD **)(v68 + 328);
          if ( *v36 )
            sub_140001660(v36[1], *v36, 1);
          sub_140001660(v36, 88, 8);
          v35 = (_QWORD *)v65;
        }
        if ( v30 != -1 )
        {
          v20 = v34 | (v20 << 32);
          v38 = v20 >> 16;
          v62 = v44;
          v37 = v31 | (v33 << 8);
          v39 = 0;
LABEL_35:
          v32 = v68;
          goto LABEL_36;
        }
        v65 = (__int64)v35;
        *(_QWORD *)&v63 = v35;
        v40 = nullptr;
        v41 = 1u;
        *(_QWORD *)&v43[0] = 1610612768;
        *(_QWORD *)&v42 = &v40;
        *((_QWORD *)&v42 + 1) = &off_1417C41C0;
        if ( (unsigned __int8)sub_141031F10(&v63, &v42) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v67,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v35 = v40;
        v52 = v41;
        sub_140528900(v65);
        v62 = v52;
        v37 = 2;
LABEL_34:
        LODWORD(v38) = 0;
        v39 = 1;
        goto LABEL_35;
      }
      sub_140BA5F10(v25);
      v32 = v68;
      v35 = *(_QWORD **)(v68 + 192);
      if ( *v35 )
        sub_140001660(v35[1], *v35, 1);
      LODWORD(v38) = sub_140001660(v35, 88, 8);
      v39 = 1;
      v37 = 0;
LABEL_36:
      *(_QWORD *)a1 = v39;
      *(_WORD *)(a1 + 8) = v37;
      *(_WORD *)(a1 + 14) = WORD1(v38);
      *(_DWORD *)(a1 + 10) = ((_DWORD)v38 << 16) | (unsigned __int16)v20;
      *(_QWORD *)(a1 + 16) = v35;
      *(_OWORD *)(a1 + 24) = v62;
      result = 1;
LABEL_37:
      *(_BYTE *)(v32 + 48) = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_1417BBEE8, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BBEE8, a2, a3, a4);
    case 3LL:
      goto LABEL_11;
    case 4LL:
      goto LABEL_16;
  }
}