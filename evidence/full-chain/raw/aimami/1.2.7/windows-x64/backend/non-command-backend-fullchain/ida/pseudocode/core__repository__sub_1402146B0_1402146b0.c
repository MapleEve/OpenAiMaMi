// win 1.2.7 | module src/core/repository.rs | ea 0x1402146b0 | name sub_1402146B0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402146B0(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        const __m128i *a4,
        unsigned __int64 a5,
        __int128 a6)
{
  __int64 result; // rax
  __int64 v11; // rcx
  __int128 *v12; // rbx
  __int64 (__fastcall *v13)(); // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __m128i *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r15
  __int64 v19; // rcx
  volatile signed __int64 *v20; // r12
  volatile signed __int64 *v21; // rdi
  __int64 v22; // rdi
  signed __int64 v23; // rt0
  const __m128i *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __m128i *v27; // rax
  __int64 v28; // rdx
  volatile signed __int64 *v29[2]; // [rsp+28h] [rbp-58h] BYREF
  __m128i v30[36]; // [rsp+38h] [rbp-48h] BYREF
  __int128 *v31; // [rsp+280h] [rbp+200h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+288h] [rbp+208h] BYREF
  __m128i v33[38]; // [rsp+290h] [rbp+210h] BYREF
  __int128 *v34; // [rsp+4F0h] [rbp+470h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+4F8h] [rbp+478h] BYREF
  __m128i v36; // [rsp+500h] [rbp+480h] BYREF
  const char *v37; // [rsp+510h] [rbp+490h]
  __int64 v38; // [rsp+518h] [rbp+498h]
  __int64 v39; // [rsp+520h] [rbp+4A0h]
  const char *v40; // [rsp+528h] [rbp+4A8h]
  __int64 v41; // [rsp+530h] [rbp+4B0h]
  __int64 v42; // [rsp+538h] [rbp+4B8h]
  void *v43; // [rsp+540h] [rbp+4C0h]
  __int128 **v44; // [rsp+548h] [rbp+4C8h]
  __int128 v45; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v46; // [rsp+770h] [rbp+6F0h]
  __int128 v47; // [rsp+778h] [rbp+6F8h] BYREF
  __int64 v48; // [rsp+788h] [rbp+708h]
  __int128 *v49; // [rsp+790h] [rbp+710h] BYREF
  __int64 (__fastcall *v50)(); // [rsp+798h] [rbp+718h]
  __int64 *v51; // [rsp+7A0h] [rbp+720h]
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // [rsp+7A8h] [rbp+728h]
  __int128 v53; // [rsp+7B0h] [rbp+730h] BYREF
  __m128i *v54; // [rsp+7C0h] [rbp+740h]
  __int64 v55; // [rsp+7C8h] [rbp+748h] BYREF
  const char *v56; // [rsp+7D0h] [rbp+750h] BYREF
  __int64 v57; // [rsp+7D8h] [rbp+758h]
  __int64 v58; // [rsp+7E0h] [rbp+760h]
  const char *v59; // [rsp+7E8h] [rbp+768h]
  __int64 v60; // [rsp+7F0h] [rbp+770h]
  __int64 v61; // [rsp+7F8h] [rbp+778h]
  const char *v62; // [rsp+800h] [rbp+780h]
  __int64 v63; // [rsp+808h] [rbp+788h]
  __int64 v64; // [rsp+810h] [rbp+790h]
  void *v65; // [rsp+818h] [rbp+798h]
  __int128 **v66; // [rsp+820h] [rbp+7A0h]
  const __m128i *v67; // [rsp+828h] [rbp+7A8h]
  __int64 v68; // [rsp+830h] [rbp+7B0h]
  __int64 v69; // [rsp+838h] [rbp+7B8h]
  __int64 v70; // [rsp+840h] [rbp+7C0h] BYREF
  int v71; // [rsp+848h] [rbp+7C8h] BYREF
  char v72; // [rsp+84Fh] [rbp+7CFh] BYREF
  __int64 v73; // [rsp+850h] [rbp+7D0h]

  v73 = -2;
  v53 = a6;
  sub_141695A00(&v34, a2, a3);
  if ( (_DWORD)v34 == 2 )
  {
    result = (__int64)v35;
    if ( ((unsigned __int8)v35 & 3u) - 2 >= 2 && ((unsigned __int8)v35 & 3) != 0 )
    {
      v35 = (__int64 (__fastcall *)())((char *)v35 - 1);
      LOBYTE(v34) = 3;
      result = sub_1416BCB00(&v35);
    }
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 8;
    *(_QWORD *)(a1 + 24) = 0;
  }
  else
  {
    sub_141695AF0(&v34, a2, a3);
    v12 = v34;
    v13 = v35;
    if ( v34 == (__int128 *)2 )
    {
      v29[0] = (volatile signed __int64 *)v35;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v31 = &v53;
        v32 = sub_140186EE0;
        v33[0].m128i_i64[0] = (__int64)v29;
        v33[0].m128i_i64[1] = (__int64)sub_1416BB0B0;
        v39 = 2;
        v40 = aCodexmateLibCo_21;
        v41 = 31;
        v43 = &unk_1419DC469;
        v44 = &v31;
        v34 = nullptr;
        v35 = (__int64 (__fastcall *)())aCodexmateLibCo_21;
        v36 = (__m128i)0x1FuLL;
        v37 = aSrcCoreReposit;
        v38 = 22;
        v42 = 0x1CF00000001LL;
        sub_1414D53A0(&v72, &v34);
      }
      nullsub_1(v11);
      v14 = sub_140001650(48, 8);
      if ( !v14 )
        sub_141938D11(8, 48);
      v68 = v14;
      nullsub_1(v15);
      v16 = (__m128i *)sub_140001650(a5, 1);
      if ( !v16 )
        sub_141938D2B(1, a5);
      v67 = v16;
      sub_1418F44E0(v16, a4, a5);
      v34 = &v53;
      v35 = sub_140186EE0;
      sub_1416ABFD0(&v47, &unk_1419DC49A, &v34);
      v17 = v68;
      *(_QWORD *)(v68 + 40) = v48;
      *(_OWORD *)(v17 + 24) = v47;
      *(_QWORD *)v17 = a5;
      *(_QWORD *)(v17 + 8) = v67;
      *(_QWORD *)(v17 + 16) = a5;
      *(_DWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 1;
      *(_QWORD *)(a1 + 16) = v17;
      *(_QWORD *)(a1 + 24) = 1;
      result = (__int64)v29[0];
      if ( (unsigned __int64)(((__int64)v29[0] & 3) - 2) >= 2 && ((__int64)v29[0] & 3) != 0 )
      {
        v35 = (__int64 (__fastcall *)())((char *)v29[0] - 1);
        LOBYTE(v34) = 3;
        return sub_1416BCB00(&v35);
      }
    }
    else
    {
      v67 = a4;
      sub_1418F44E0(v33, &v36, 0x260u);
      v31 = v12;
      v32 = v13;
      v71 = 0;
      LODWORD(v68) = 0;
      v18 = off_1421E6EC0;
      while ( 1 )
      {
        sub_1416A31D0(&v34, &v31);
        if ( (_DWORD)v34 != 1 )
          break;
        v20 = (volatile signed __int64 *)v35;
        v21 = (volatile signed __int64 *)v36.m128i_i64[0];
        if ( v35 )
        {
          sub_1418F44E0(v30, (const __m128i *)&v36.m128i_u64[1], 0x248u);
          v29[0] = v20;
          v29[1] = v21;
          sub_14168A660(&v55, v29);
          v69 = (__int64)v56;
          v22 = sub_141695140(v56, v57);
          if ( v55 )
            sub_140001660(v69, v55, 1);
          if ( v22 )
          {
            ++v71;
            v70 = v22;
            if ( *v18 >= 2u )
            {
              v49 = &v53;
              v50 = sub_140186EE0;
              v51 = &v70;
              v52 = sub_1416BB0B0;
              v61 = 2;
              v62 = aCodexmateLibCo_21;
              v63 = 31;
              v65 = &unk_1419DC400;
              v66 = &v49;
              v55 = 0;
              v56 = aCodexmateLibCo_21;
              v57 = 31;
              v58 = 0;
              v59 = aSrcCoreReposit;
              v60 = 22;
              v64 = 0x1E900000001LL;
              sub_1414D53A0(&v72, &v55);
              v22 = v70;
            }
            if ( (unsigned int)(v22 & 3) - 2 >= 2 && (v22 & 3) != 0 )
            {
              v56 = (const char *)(v22 - 1);
              LOBYTE(v55) = 3;
              sub_1416BCB00(&v56);
            }
          }
          else
          {
            LODWORD(v68) = v68 + 1;
          }
          if ( !_InterlockedDecrement64(v29[0]) )
            sub_14119A730(v29);
        }
        else
        {
          ++v71;
          v70 = v36.m128i_i64[0];
          if ( *v18 >= 2u )
          {
            v49 = &v53;
            v50 = sub_140186EE0;
            v51 = &v70;
            v52 = sub_1416BB0B0;
            v61 = 2;
            v62 = aCodexmateLibCo_21;
            v63 = 31;
            v65 = &unk_1419DC434;
            v66 = &v49;
            v55 = 0;
            v56 = aCodexmateLibCo_21;
            v57 = 31;
            v58 = 0;
            v59 = aSrcCoreReposit;
            v60 = 22;
            v64 = 0x1E100000001LL;
            sub_1414D53A0(&v72, &v55);
            v21 = (volatile signed __int64 *)v70;
          }
          if ( ((unsigned __int8)v21 & 3u) - 2 >= 2 && ((unsigned __int8)v21 & 3) != 0 )
          {
            v56 = (char *)v21 - 1;
            LOBYTE(v55) = 3;
            sub_1416BCB00(&v56);
          }
        }
      }
      if ( v31 )
        sub_1416A0770(&v32);
      v23 = _InterlockedDecrement64((volatile signed __int64 *)v33[0].m128i_i64[0]);
      v24 = v67;
      if ( !v23 )
        sub_14119A730(v33);
      if ( v71 )
      {
        nullsub_1(v19);
        v25 = sub_140001650(48, 8);
        if ( !v25 )
          sub_141938D11(8, 48);
        v69 = v25;
        nullsub_1(v26);
        v27 = (__m128i *)sub_140001650(a5, 1);
        if ( !v27 )
          sub_141938D2B(1, a5);
        v54 = v27;
        sub_1418F44E0(v27, v24, a5);
        v34 = (__int128 *)&v71;
        v35 = sub_1416BBE30;
        v36.m128i_i64[0] = (__int64)&v53;
        v36.m128i_i64[1] = (__int64)sub_140186EE0;
        sub_1416ABFD0(&v45, &unk_1419DC3DA, &v34);
        v28 = v69;
        *(_QWORD *)(v69 + 40) = v46;
        *(_OWORD *)(v28 + 24) = v45;
        *(_QWORD *)v28 = a5;
        *(_QWORD *)(v28 + 8) = v54;
        *(_QWORD *)(v28 + 16) = a5;
        result = 1;
      }
      else
      {
        v28 = 8;
        result = 0;
      }
      *(_DWORD *)a1 = v68;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v28;
      *(_QWORD *)(a1 + 24) = result;
    }
  }
  return result;
}
