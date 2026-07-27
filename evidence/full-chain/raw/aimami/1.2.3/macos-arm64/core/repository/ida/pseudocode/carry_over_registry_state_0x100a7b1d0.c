// __ZN13codexmate_lib4core10repository25carry_over_registry_state @ 0x100a7b1d0 | 基线 same-set
void __fastcall codexmate_lib::core::repository::carry_over_registry_state::hd49b91d1ccc97529(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r15
  __int64 v5; // r12
  unsigned __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  bool v10; // zf
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // ecx
  char v16; // al
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // xmm0_8
  int v31; // esi
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // xmm0_8
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // [rsp-60h] [rbp-60h]
  __int64 v38; // [rsp-58h] [rbp-58h]
  unsigned __int64 v39; // [rsp-50h] [rbp-50h] BYREF
  __int64 v40; // [rsp-48h] [rbp-48h]
  __int64 v41; // [rsp-40h] [rbp-40h]
  unsigned __int8 v42; // [rsp-31h] [rbp-31h]

  if ( a2 ) /*0x100a7b1d3*/
  {
    v4 = *(_DWORD **)(a2 + 296); /*0x100a7b1f0*/
    v5 = *(_QWORD *)(a2 + 304); /*0x100a7b1f7*/
    v6 = (unsigned __int64 *)v4; /*0x100a7b1fe*/
    core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x100a7b204*/
    if ( v8 ) /*0x100a7b20c*/
    {
      if ( v5 != 7 || (LODWORD(v7) = *v4 ^ 0x6E6B6E75 | *(_DWORD *)((char *)v4 + 3) ^ 0x6E776F6E, (_DWORD)v7) ) /*0x100a7b22b*/
      {
        v9 = *(_BYTE *)(a2 + 418); /*0x100a7b231*/
        if ( v9 == 3 ) /*0x100a7b23b*/
          v9 = 2 * *(_BYTE *)(a2 + 96); /*0x100a7b242*/
        v10 = *(_BYTE *)a2 == 0; /*0x100a7b244*/
        v42 = v9; /*0x100a7b248*/
        if ( v10 ) /*0x100a7b24b*/
        {
          if ( (*(_BYTE *)(a2 + 96) & 1) != 0 ) /*0x100a7b25b*/
          {
            v12 = *(_QWORD *)(a2 + 104); /*0x100a7b25d*/
            v11 = 1000 * v12; /*0x100a7b265*/
            if ( (unsigned __int64)(v12 - 1) >= 0x2540BE3FFLL ) /*0x100a7b279*/
              v11 = *(_QWORD *)(a2 + 104); /*0x100a7b279*/
          }
          else
          {
            chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v39); /*0x100a7b286*/
            v13 = ((int)v39 >> 13) - 1; /*0x100a7b293*/
            v14 = 0; /*0x100a7b296*/
            if ( (int)v39 >> 13 <= 0 ) /*0x100a7b29a*/
            {
              v15 = (1 - ((int)v39 >> 13)) / 0x190u + 1; /*0x100a7b2ae*/
              v13 += 400 * v15; /*0x100a7b2b6*/
              v14 = -146097 * v15; /*0x100a7b2b8*/
            }
            v11 = 1000 /*0x100a7b31a*/
                * (HIDWORD(v39)
                 + 86400LL
                 * (int)(((v13 / 100) >> 2)
                       + ((1461 * v13) >> 2)
                       + v14
                       + (((unsigned int)v39 >> 4) & 0x1FF)
                       - v13 / 100
                       - 719163))
                + (unsigned int)v40 / 0xF4240uLL;
          }
        }
        else
        {
          v11 = *(_QWORD *)(a2 + 8); /*0x100a7b24d*/
        }
        v16 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69((__int64)v4, v5); /*0x100a7b323*/
        v6 = (unsigned __int64 *)a1; /*0x100a7b32f*/
        codexmate_lib::core::repository::apply_plan_state::h33911d6dab757bc8((unsigned __int8 *)a1, v16, v42, v11); /*0x100a7b335*/
      }
    }
    if ( !*(_QWORD *)(a1 + 280) && *(_QWORD *)(a2 + 280) ) /*0x100a7b344*/
    {
      v6 = &v39; /*0x100a7b35c*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, a2 + 264); /*0x100a7b360*/
      if ( *(_QWORD *)(a1 + 264) ) /*0x100a7b365*/
      {
        v6 = *(unsigned __int64 **)(a1 + 272); /*0x100a7b36d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, *(_QWORD *)(a1 + 264), 1); /*0x100a7b379*/
      }
      *(_QWORD *)(a1 + 280) = v41; /*0x100a7b382*/
      v17 = v39; /*0x100a7b386*/
      LODWORD(v7) = v40; /*0x100a7b38a*/
      *(_QWORD *)(a1 + 272) = v40; /*0x100a7b38e*/
      *(_QWORD *)(a1 + 264) = v17; /*0x100a7b392*/
    }
    v18 = 0x8000000000000000LL; /*0x100a7b395*/
    if ( __OFSUB__(0, *(_QWORD *)(a1 + 336)) ) /*0x100a7b3a8*/
    {
      v20 = 0x8000000000000000LL; /*0x100a7b417*/
      if ( *(_QWORD *)(a2 + 336) != 0x8000000000000000LL ) /*0x100a7b421*/
      {
        v6 = &v39; /*0x100a7b42a*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, a2 + 336); /*0x100a7b42e*/
        v20 = v39; /*0x100a7b433*/
        v37 = v40; /*0x100a7b43b*/
        v38 = v41; /*0x100a7b443*/
      }
      *(_QWORD *)(a1 + 336) = v20; /*0x100a7b447*/
      LODWORD(v7) = v38; /*0x100a7b452*/
      *(_QWORD *)(a1 + 344) = v37; /*0x100a7b456*/
      *(_QWORD *)(a1 + 352) = v38; /*0x100a7b45d*/
      if ( *(_QWORD *)(a1 + 360) != 0x8000000000000000LL ) /*0x100a7b46b*/
      {
LABEL_24:
        if ( *(_QWORD *)(a1 + 384) != 0x8000000000000000LL ) /*0x100a7b3be*/
          goto LABEL_25; /*0x100a7b3be*/
        goto LABEL_33; /*0x100a7b3be*/
      }
    }
    else if ( *(_QWORD *)(a1 + 360) != 0x8000000000000000LL ) /*0x100a7b3b1*/
    {
      goto LABEL_24; /*0x100a7b3b1*/
    }
    v21 = 0x8000000000000000LL; /*0x100a7b471*/
    if ( *(_QWORD *)(a2 + 360) != 0x8000000000000000LL ) /*0x100a7b47b*/
    {
      v6 = &v39; /*0x100a7b484*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, a2 + 360); /*0x100a7b488*/
      v21 = v39; /*0x100a7b48d*/
      v37 = v40; /*0x100a7b495*/
      v38 = v41; /*0x100a7b49d*/
    }
    *(_QWORD *)(a1 + 360) = v21; /*0x100a7b4a1*/
    LODWORD(v7) = v38; /*0x100a7b4ac*/
    *(_QWORD *)(a1 + 368) = v37; /*0x100a7b4b0*/
    *(_QWORD *)(a1 + 376) = v38; /*0x100a7b4b7*/
    if ( *(_QWORD *)(a1 + 384) != 0x8000000000000000LL ) /*0x100a7b4c5*/
    {
LABEL_25:
      if ( *(_QWORD *)(a2 + 64) ) /*0x100a7b3c4*/
      {
LABEL_26:
        *(_BYTE *)(a1 + 416) = *(_BYTE *)(a2 + 416); /*0x100a7b3cf*/
        *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16); /*0x100a7b3e2*/
        *(_BYTE *)(a1 + 417) = *(_BYTE *)(a2 + 417); /*0x100a7b3ee*/
        *(_BYTE *)(a1 + 419) = *(_BYTE *)(a2 + 419); /*0x100a7b3fc*/
        v19 = *(_QWORD *)(a2 + 72); /*0x100a7b402*/
        *(_QWORD *)(a1 + 64) = 1; /*0x100a7b406*/
        *(_QWORD *)(a1 + 72) = v19; /*0x100a7b40e*/
        goto LABEL_42; /*0x100a7b412*/
      }
LABEL_36:
      v22 = *(_BYTE *)(a2 + 416); /*0x100a7b520*/
      if ( v22 != 2 ) /*0x100a7b52a*/
        *(_BYTE *)(a1 + 416) = v22; /*0x100a7b52c*/
      if ( *(_QWORD *)(a2 + 16) ) /*0x100a7b532*/
      {
        v23 = *(_QWORD *)(a2 + 24); /*0x100a7b539*/
        *(_QWORD *)(a1 + 16) = 1; /*0x100a7b53d*/
        *(_QWORD *)(a1 + 24) = v23; /*0x100a7b545*/
      }
      v24 = *(_BYTE *)(a2 + 417); /*0x100a7b549*/
      if ( v24 != 2 ) /*0x100a7b553*/
        *(_BYTE *)(a1 + 417) = v24; /*0x100a7b555*/
LABEL_42:
      if ( *(_QWORD *)(a2 + 32) ) /*0x100a7b55b*/
      {
        v25 = *(_QWORD *)(a2 + 40); /*0x100a7b562*/
        *(_QWORD *)(a1 + 32) = 1; /*0x100a7b566*/
        *(_QWORD *)(a1 + 40) = v25; /*0x100a7b56e*/
      }
      if ( *(_QWORD *)(a2 + 48) ) /*0x100a7b572*/
      {
        v26 = *(_QWORD *)(a2 + 56); /*0x100a7b579*/
        *(_QWORD *)(a1 + 48) = 1; /*0x100a7b57d*/
        *(_QWORD *)(a1 + 56) = v26; /*0x100a7b585*/
      }
      if ( *(_DWORD *)(a2 + 80) == 1 ) /*0x100a7b58e*/
      {
        v7 = *(_QWORD *)(a1 + 88); /*0x100a7b5bb*/
        if ( *(_QWORD *)(a2 + 88) > v7 ) /*0x100a7b5c2*/
          v7 = *(_QWORD *)(a2 + 88); /*0x100a7b5c2*/
        if ( !*(_BYTE *)(a1 + 80) ) /*0x100a7b5c6*/
          v7 = *(_QWORD *)(a2 + 88); /*0x100a7b5ca*/
        *(_QWORD *)(a1 + 80) = 1; /*0x100a7b5ce*/
        *(_QWORD *)(a1 + 88) = v7; /*0x100a7b5d6*/
        if ( *(_DWORD *)(a2 + 96) != 1 ) /*0x100a7b5df*/
        {
LABEL_48:
          v27 = *(_QWORD *)(a2 + 112); /*0x100a7b597*/
          if ( v27 == 2 ) /*0x100a7b59f*/
            goto LABEL_49; /*0x100a7b59f*/
          goto LABEL_61; /*0x100a7b59f*/
        }
      }
      else if ( *(_DWORD *)(a2 + 96) != 1 ) /*0x100a7b595*/
      {
        goto LABEL_48; /*0x100a7b595*/
      }
      v7 = *(_QWORD *)(a1 + 104); /*0x100a7b5e5*/
      if ( *(_QWORD *)(a2 + 104) > v7 ) /*0x100a7b5ec*/
        v7 = *(_QWORD *)(a2 + 104); /*0x100a7b5ec*/
      if ( !*(_BYTE *)(a1 + 96) ) /*0x100a7b5f0*/
        v7 = *(_QWORD *)(a2 + 104); /*0x100a7b5f4*/
      *(_QWORD *)(a1 + 96) = 1; /*0x100a7b5f8*/
      *(_QWORD *)(a1 + 104) = v7; /*0x100a7b600*/
      v27 = *(_QWORD *)(a2 + 112); /*0x100a7b604*/
      if ( v27 == 2 ) /*0x100a7b60c*/
      {
LABEL_49:
        v28 = *(_QWORD *)(a2 + 152); /*0x100a7b5a1*/
        if ( v28 == 2 ) /*0x100a7b5ac*/
          return; /*0x100a7b5ac*/
LABEL_67:
        if ( *(_DWORD *)(a2 + 168) == 1 ) /*0x100a7b694*/
        {
          LODWORD(v7) = *(_DWORD *)(a2 + 172); /*0x100a7b696*/
          v33 = 1; /*0x100a7b69d*/
          v34 = *(_QWORD *)(a2 + 176); /*0x100a7b6a2*/
          v35 = *(_DWORD *)(a2 + 184); /*0x100a7b6ab*/
          if ( (v28 & 1) == 0 ) /*0x100a7b6b5*/
          {
LABEL_69:
            v36 = 0; /*0x100a7b6b7*/
LABEL_72:
            *(_QWORD *)(a1 + 152) = v36; /*0x100a7b6de*/
            *(_QWORD *)(a1 + 160) = v6; /*0x100a7b6e5*/
            *(_DWORD *)(a1 + 168) = v33; /*0x100a7b6ec*/
            *(_DWORD *)(a1 + 172) = v7; /*0x100a7b6f2*/
            *(_QWORD *)(a1 + 176) = v34; /*0x100a7b6f8*/
            *(_DWORD *)(a1 + 184) = v35; /*0x100a7b700*/
            return; /*0x100a7b700*/
          }
        }
        else
        {
          v33 = 0; /*0x100a7b6bb*/
          v34 = *(_QWORD *)(a2 + 176); /*0x100a7b6bd*/
          v35 = *(_DWORD *)(a2 + 184); /*0x100a7b6c6*/
          if ( (v28 & 1) == 0 ) /*0x100a7b6d0*/
            goto LABEL_69; /*0x100a7b6d0*/
        }
        v6 = *(unsigned __int64 **)(a2 + 160); /*0x100a7b6d2*/
        v36 = 1; /*0x100a7b6d9*/
        goto LABEL_72; /*0x100a7b6d9*/
      }
LABEL_61:
      if ( *(_BYTE *)(a2 + 128) ) /*0x100a7b60e*/
      {
        LODWORD(v7) = *(_DWORD *)(a2 + 132); /*0x100a7b618*/
        v29 = 1; /*0x100a7b61f*/
        v30 = *(_QWORD *)(a2 + 136); /*0x100a7b624*/
        v31 = *(_DWORD *)(a2 + 144); /*0x100a7b62d*/
        if ( (v27 & 1) == 0 ) /*0x100a7b637*/
        {
LABEL_63:
          v32 = 0; /*0x100a7b639*/
          goto LABEL_66; /*0x100a7b63b*/
        }
      }
      else
      {
        v29 = 0; /*0x100a7b63d*/
        v30 = *(_QWORD *)(a2 + 136); /*0x100a7b63f*/
        v31 = *(_DWORD *)(a2 + 144); /*0x100a7b648*/
        if ( (v27 & 1) == 0 ) /*0x100a7b652*/
          goto LABEL_63; /*0x100a7b652*/
      }
      v6 = *(unsigned __int64 **)(a2 + 120); /*0x100a7b654*/
      v32 = 1; /*0x100a7b658*/
LABEL_66:
      *(_QWORD *)(a1 + 112) = v32; /*0x100a7b65d*/
      *(_QWORD *)(a1 + 120) = v6; /*0x100a7b661*/
      *(_DWORD *)(a1 + 128) = v29; /*0x100a7b665*/
      *(_DWORD *)(a1 + 132) = v7; /*0x100a7b66b*/
      *(_QWORD *)(a1 + 136) = v30; /*0x100a7b671*/
      *(_DWORD *)(a1 + 144) = v31; /*0x100a7b679*/
      v28 = *(_QWORD *)(a2 + 152); /*0x100a7b67f*/
      if ( v28 == 2 ) /*0x100a7b68a*/
        return; /*0x100a7b68a*/
      goto LABEL_67; /*0x100a7b68a*/
    }
LABEL_33:
    if ( *(_QWORD *)(a2 + 384) != 0x8000000000000000LL ) /*0x100a7b4d2*/
    {
      v6 = &v39; /*0x100a7b4db*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v39, a2 + 384); /*0x100a7b4df*/
      v18 = v39; /*0x100a7b4e4*/
      v37 = v40; /*0x100a7b4ec*/
      v38 = v41; /*0x100a7b4f4*/
    }
    *(_QWORD *)(a1 + 384) = v18; /*0x100a7b4f8*/
    LODWORD(v7) = v38; /*0x100a7b503*/
    *(_QWORD *)(a1 + 392) = v37; /*0x100a7b507*/
    *(_QWORD *)(a1 + 400) = v38; /*0x100a7b50e*/
    if ( *(_QWORD *)(a2 + 64) ) /*0x100a7b515*/
      goto LABEL_26; /*0x100a7b51a*/
    goto LABEL_36; /*0x100a7b51a*/
  }
}