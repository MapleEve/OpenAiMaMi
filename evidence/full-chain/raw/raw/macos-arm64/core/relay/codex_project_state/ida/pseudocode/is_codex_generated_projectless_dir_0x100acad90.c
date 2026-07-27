// __ZN13codexmate_lib4core5relay19codex_project_state34is_codex_generated_projectless_dir @ 0x100acad90 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::is_codex_generated_projectless_dir::h356511d0c1e10a8c(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned __int64 v5; // rax
  _QWORD *v6; // rcx
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  _QWORD v10[8]; // [rsp+8h] [rbp-68h] BYREF
  __int16 v11; // [rsp+48h] [rbp-28h]
  __int64 v12; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]
  unsigned __int64 v14; // [rsp+60h] [rbp-10h]

  v10[0] = 0x2F0000005CLL; /*0x100acada7*/
  v10[1] = a1; /*0x100acadab*/
  v10[2] = a2; /*0x100acadaf*/
  v10[3] = a1; /*0x100acadb3*/
  v10[4] = a1 + a2; /*0x100acadb7*/
  v10[5] = 0; /*0x100acadbb*/
  v10[6] = 0; /*0x100acadc3*/
  v10[7] = a2; /*0x100acadcb*/
  v11 = 1; /*0x100acadcf*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h42270257245ebbfb( /*0x100acaddd*/
    &v12,
    v10);
  if ( v14 >= 3 ) /*0x100acadea*/
  {
    v5 = v14 + 1; /*0x100acae16*/
    v6 = (_QWORD *)(v13 + 40); /*0x100acae19*/
    while ( 1 ) /*0x100acae2d*/
    {
      if ( *(v6 - 4) == 9 ) /*0x100acae32*/
      {
        v7 = (_BYTE *)*(v6 - 5); /*0x100acae34*/
        if ( (*v7 | (unsigned __int8)(32 * ((unsigned __int8)(*v7 - 65) < 0x1Au))) == 100 /*0x100acaf50*/
          && (v7[1] | (unsigned __int8)(32 * ((unsigned __int8)(v7[1] - 65) < 0x1Au))) == 111
          && (v7[2] | (unsigned __int8)(32 * ((unsigned __int8)(v7[2] - 65) < 0x1Au))) == 99
          && (v7[3] | (unsigned __int8)(32 * ((unsigned __int8)(v7[3] - 65) < 0x1Au))) == 117
          && (v7[4] | (unsigned __int8)(32 * ((unsigned __int8)(v7[4] - 65) < 0x1Au))) == 109
          && (v7[5] | (unsigned __int8)(32 * ((unsigned __int8)(v7[5] - 65) < 0x1Au))) == 101
          && (v7[6] | (unsigned __int8)(32 * ((unsigned __int8)(v7[6] - 65) < 0x1Au))) == 110
          && (v7[7] | (unsigned __int8)(32 * ((unsigned __int8)(v7[7] - 65) < 0x1Au))) == 116
          && (v7[8] | (unsigned __int8)(32 * ((unsigned __int8)(v7[8] - 65) < 0x1Au))) == 115
          && *(v6 - 2) == 5 )
        {
          v8 = (_BYTE *)*(v6 - 3); /*0x100acaf56*/
          if ( (*v8 | (unsigned __int8)(32 * ((unsigned __int8)(*v8 - 65) < 0x1Au))) == 99 /*0x100acaffd*/
            && (v8[1] | (unsigned __int8)(32 * ((unsigned __int8)(v8[1] - 65) < 0x1Au))) == 111
            && (v8[2] | (unsigned __int8)(32 * ((unsigned __int8)(v8[2] - 65) < 0x1Au))) == 100
            && (v8[3] | (unsigned __int8)(32 * ((unsigned __int8)(v8[3] - 65) < 0x1Au))) == 101
            && (v8[4] | (unsigned __int8)(32 * ((unsigned __int8)(v8[4] - 65) < 0x1Au))) == 120
            && *v6 == 10 )
          {
            v9 = (_BYTE *)*(v6 - 1); /*0x100acb003*/
            if ( v9[4] == 45 /*0x100acb0a2*/
              && v9[7] == 45
              && (unsigned __int8)(*v9 - 58) >= 0xF6u
              && (unsigned __int8)(v9[1] - 58) >= 0xF6u
              && (unsigned __int8)(v9[2] - 58) >= 0xF6u
              && (unsigned __int8)(v9[3] - 58) >= 0xF6u
              && (unsigned __int8)(v9[5] - 58) >= 0xF6u
              && (unsigned __int8)(v9[6] - 58) >= 0xF6u
              && (unsigned __int8)(v9[8] - 58) >= 0xF6u
              && (unsigned __int8)(v9[9] - 48) < 0xAu )
            {
              break; /*0x100acb0a2*/
            }
          }
        }
      }
      --v5; /*0x100acae20*/
      v6 += 2; /*0x100acae23*/
      if ( v5 <= 3 ) /*0x100acae2b*/
        goto LABEL_2; /*0x100acae2b*/
    }
    LOBYTE(v2) = 1; /*0x100acb0a8*/
    v3 = v12; /*0x100acb0aa*/
    if ( v12 ) /*0x100acb0b1*/
      goto LABEL_3; /*0x100acb0b1*/
  }
  else
  {
LABEL_2:
    v2 = 0; /*0x100acadec*/
    v3 = v12; /*0x100acadee*/
    if ( v12 ) /*0x100acadf5*/
LABEL_3:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 16 * v3, 8); /*0x100acadf7*/
  }
  return v2; /*0x100acae0b*/
}