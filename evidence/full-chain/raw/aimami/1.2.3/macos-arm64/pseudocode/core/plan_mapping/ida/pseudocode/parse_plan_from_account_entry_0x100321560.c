// __ZN13codexmate_lib4core12plan_mapping29parse_plan_from_account_entry @ 0x100321560
__int64 __fastcall codexmate_lib::core::plan_mapping::parse_plan_from_account_entry::h806c03ceb68a3b81(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r14
  unsigned int v3; // r13d
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdi
  _BYTE *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  _BYTE *v47; // [rsp+0h] [rbp-90h]
  __int64 v48; // [rsp+8h] [rbp-88h] BYREF
  __int64 v49; // [rsp+10h] [rbp-80h]
  void *v50; // [rsp+18h] [rbp-78h]
  __int64 v51; // [rsp+20h] [rbp-70h]
  void *v52; // [rsp+28h] [rbp-68h]
  __int64 v53; // [rsp+30h] [rbp-60h]
  void *v54; // [rsp+38h] [rbp-58h]
  __int64 v55; // [rsp+40h] [rbp-50h]
  _BYTE *v56; // [rsp+48h] [rbp-48h]
  __int64 v57; // [rsp+50h] [rbp-40h] BYREF
  __int64 v58; // [rsp+58h] [rbp-38h]
  __int64 v59; // [rsp+60h] [rbp-30h]

  v1 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3CF7, 18); /*0x100321580*/
  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v1); /*0x10032158f*/
  v2 = v49; /*0x100321594*/
  v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x1003215a4*/
  if ( (_BYTE)v3 == 8 ) /*0x1003215a9*/
  {
    if ( v48 ) /*0x1003215b9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x1003215c3*/
    v4 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D18, 18); /*0x1003215d7*/
    codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v4); /*0x1003215e6*/
    v2 = v49; /*0x1003215eb*/
    v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x1003215fb*/
    if ( (_BYTE)v3 == 8 ) /*0x100321600*/
    {
      if ( v48 ) /*0x100321610*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x10032161a*/
      v5 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D2A, 18); /*0x10032162e*/
      codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v5); /*0x10032163d*/
      v2 = v49; /*0x100321642*/
      v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x100321652*/
      if ( (_BYTE)v3 == 8 ) /*0x100321657*/
      {
        if ( v48 ) /*0x100321667*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x100321671*/
        v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D3C, 18); /*0x100321685*/
        codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v6); /*0x100321694*/
        v2 = v49; /*0x100321699*/
        v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x1003216a9*/
        if ( (_BYTE)v3 == 8 ) /*0x1003216ae*/
        {
          if ( v48 ) /*0x1003216be*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x1003216c8*/
          v7 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1003216dc*/
                 a1,
                 "/account/plan/idtakeover_restorethread_reconcileimage generationconnection resetreasoning_effortprocess"
                 "ingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handl"
                 "erfield identifierTauri-Channel-Id",
                 16);
          codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v7); /*0x1003216eb*/
          v2 = v49; /*0x1003216f0*/
          v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x100321700*/
          if ( (_BYTE)v3 == 8 ) /*0x100321705*/
          {
            if ( v48 ) /*0x100321715*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x10032171f*/
            v8 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D4E, 30); /*0x100321733*/
            codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v8); /*0x100321742*/
            v2 = v49; /*0x100321747*/
            v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x100321757*/
            if ( (_BYTE)v3 == 8 ) /*0x10032175c*/
            {
              if ( v48 ) /*0x10032176c*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x100321776*/
              v9 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3CE5, 18); /*0x10032178d*/
              codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v9); /*0x10032179c*/
              v2 = v49; /*0x1003217a1*/
              v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x1003217b1*/
              if ( (_BYTE)v3 == 8 ) /*0x1003217b6*/
              {
                if ( v48 ) /*0x1003217c6*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x1003217d0*/
                v10 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D6C, 17); /*0x1003217e4*/
                codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v10); /*0x1003217f3*/
                v2 = v49; /*0x1003217f8*/
                v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x100321808*/
                if ( (_BYTE)v3 == 8 ) /*0x10032180d*/
                {
                  if ( v48 ) /*0x10032181d*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x100321827*/
                  v11 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3D7D, 35); /*0x10032183b*/
                  codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v11); /*0x10032184a*/
                  v2 = v49; /*0x10032184f*/
                  v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x10032185f*/
                  if ( (_BYTE)v3 == 8 ) /*0x100321864*/
                  {
                    if ( v48 ) /*0x100321874*/
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x10032187e*/
                    v12 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3DA0, 35); /*0x100321892*/
                    codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v12); /*0x1003218a1*/
                    v2 = v49; /*0x1003218a6*/
                    v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x1003218b6*/
                    if ( (_BYTE)v3 == 8 ) /*0x1003218bb*/
                    {
                      if ( v48 ) /*0x1003218cb*/
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x1003218d5*/
                      v13 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3DC3, 29); /*0x1003218e9*/
                      codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v13); /*0x1003218f8*/
                      v2 = v49; /*0x1003218fd*/
                      v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x10032190d*/
                      if ( (_BYTE)v3 == 8 ) /*0x100321912*/
                      {
                        if ( v48 ) /*0x100321922*/
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x10032192c*/
                        v14 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3DE0, 30); /*0x100321940*/
                        codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v14); /*0x10032194f*/
                        v2 = v49; /*0x100321954*/
                        v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x100321964*/
                        if ( (_BYTE)v3 == 8 ) /*0x100321969*/
                        {
                          if ( v48 ) /*0x100321979*/
                            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x100321983*/
                          v15 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, &unk_1015E3DFE, 38); /*0x100321997*/
                          codexmate_lib::core::plan_mapping::plan_type_json_to_label::h55f0f9b1280664af(&v48, v15); /*0x1003219a6*/
                          v2 = v49; /*0x1003219ab*/
                          v3 = codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(v49, v50); /*0x1003219bb*/
                          if ( (_BYTE)v3 == 8 ) /*0x1003219c0*/
                          {
                            if ( v48 ) /*0x1003219cc*/
                              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v48, 1); /*0x1003219d6*/
                            v3 = 0; /*0x1003219db*/
                            v48 = 0; /*0x1003219e5*/
                            v49 = 3; /*0x1003219f0*/
                            v50 = &unk_1015E3CE5; /*0x1003219f8*/
                            v51 = 18; /*0x1003219fc*/
                            v52 = &unk_1015E3E24; /*0x100321a0b*/
                            v53 = 25; /*0x100321a0f*/
                            v54 = &unk_1015E3E3D; /*0x100321a1e*/
                            v55 = 13; /*0x100321a22*/
                            v16 = 3; /*0x100321a2a*/
                            while ( 1 ) /*0x100321a7e*/
                            {
                              v20 = (_BYTE *)serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100321a7e*/
                                               a1,
                                               (&v47)[v16],
                                               *(__int64 *)((char *)&v48 + v16 * 8));
                              if ( v20 && *v20 == 5 ) /*0x100321a8b*/
                              {
                                v47 = v20; /*0x100321a8d*/
                                v56 = v20 + 8; /*0x100321aa0*/
                                v21 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321aab*/
                                        v20 + 8,
                                        "typefullargsopenwithkindsavetrueuuidemitshowhide",
                                        4);
                                if ( v21 ) /*0x100321ab3*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v21); /*0x100321abc*/
                                  v22 = v57; /*0x100321ac1*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321ac8*/
                                  {
                                    v23 = v58; /*0x100321aca*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321ada*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321adf*/
                                      goto LABEL_151; /*0x100321adf*/
                                    v3 = 0; /*0x100321ae8*/
                                    if ( v22 ) /*0x100321af2*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321aff*/
                                  }
                                }
                                v24 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321b14*/
                                        v56,
                                        &anon_b0ee9adff4519c22b647af231a5a39fa_55,
                                        4);
                                if ( v24 ) /*0x100321b1c*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v24); /*0x100321b25*/
                                  v22 = v57; /*0x100321b2a*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321b31*/
                                  {
                                    v23 = v58; /*0x100321b33*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321b43*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321b48*/
                                      goto LABEL_151; /*0x100321b48*/
                                    v3 = 0; /*0x100321b51*/
                                    if ( v22 ) /*0x100321b5b*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321b68*/
                                  }
                                }
                                v25 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321b7d*/
                                        v56,
                                        &unk_1015E3C96,
                                        9);
                                if ( v25 ) /*0x100321b85*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v25); /*0x100321b8e*/
                                  v22 = v57; /*0x100321b93*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321b9a*/
                                  {
                                    v23 = v58; /*0x100321b9c*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321bac*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321bb1*/
                                      goto LABEL_151; /*0x100321bb1*/
                                    v3 = 0; /*0x100321bba*/
                                    if ( v22 ) /*0x100321bc4*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321bd1*/
                                  }
                                }
                                v26 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321be6*/
                                        v56,
                                        &unk_1015E3B40,
                                        4);
                                if ( v26 ) /*0x100321bee*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v26); /*0x100321bf7*/
                                  v22 = v57; /*0x100321bfc*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321c03*/
                                  {
                                    v23 = v58; /*0x100321c05*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321c15*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321c1a*/
                                      goto LABEL_151; /*0x100321c1a*/
                                    v3 = 0; /*0x100321c23*/
                                    if ( v22 ) /*0x100321c2d*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321c3a*/
                                  }
                                }
                                v27 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321c4f*/
                                        v56,
                                        &unk_1015E3B3C,
                                        4);
                                if ( v27 ) /*0x100321c57*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v27); /*0x100321c60*/
                                  v22 = v57; /*0x100321c65*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321c6c*/
                                  {
                                    v23 = v58; /*0x100321c6e*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321c7e*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321c83*/
                                      goto LABEL_151; /*0x100321c83*/
                                    v3 = 0; /*0x100321c8c*/
                                    if ( v22 ) /*0x100321c96*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321ca3*/
                                  }
                                }
                                v28 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321cb8*/
                                        v56,
                                        &anon_b0ee9adff4519c22b647af231a5a39fa_54,
                                        4);
                                if ( v28 ) /*0x100321cc0*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v28); /*0x100321cc9*/
                                  v22 = v57; /*0x100321cce*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321cd5*/
                                  {
                                    v23 = v58; /*0x100321cd7*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321ce7*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321cec*/
                                      goto LABEL_151; /*0x100321cec*/
                                    v3 = 0; /*0x100321cf5*/
                                    if ( v22 ) /*0x100321cff*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321d0c*/
                                  }
                                }
                                v29 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321d21*/
                                        v56,
                                        &unk_1015E3E4A,
                                        3);
                                if ( v29 ) /*0x100321d29*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v29); /*0x100321d32*/
                                  v22 = v57; /*0x100321d37*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321d3e*/
                                  {
                                    v23 = v58; /*0x100321d40*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321d50*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321d55*/
                                      goto LABEL_151; /*0x100321d55*/
                                    v3 = 0; /*0x100321d5e*/
                                    if ( v22 ) /*0x100321d68*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321d75*/
                                  }
                                }
                                v30 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321d8a*/
                                        v56,
                                        &unk_1015E3E4D,
                                        12);
                                if ( v30 ) /*0x100321d92*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v30); /*0x100321d9b*/
                                  v22 = v57; /*0x100321da0*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321da7*/
                                  {
                                    v23 = v58; /*0x100321da9*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321db9*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321dbe*/
                                      goto LABEL_151; /*0x100321dbe*/
                                    v3 = 0; /*0x100321dc7*/
                                    if ( v22 ) /*0x100321dd1*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321dde*/
                                  }
                                }
                                v31 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x100321df3*/
                                        v56,
                                        "id/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
                                        2);
                                if ( v31 ) /*0x100321dfb*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v31); /*0x100321e04*/
                                  v22 = v57; /*0x100321e09*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321e10*/
                                  {
                                    v23 = v58; /*0x100321e12*/
                                    v3 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263( /*0x100321e22*/
                                           v58,
                                           v59);
                                    if ( (_BYTE)v3 != 9 ) /*0x100321e27*/
                                      goto LABEL_151; /*0x100321e27*/
                                    v3 = 0; /*0x100321e30*/
                                    if ( v22 ) /*0x100321e3a*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321e47*/
                                  }
                                }
                                v32 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100321e5f*/
                                        v47,
                                        "/price/monthly_amount/price/amount/unit_amount/monthly_amount/amount",
                                        21);
                                if ( v32 ) /*0x100321e67*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v32); /*0x100321e74*/
                                  v22 = v57; /*0x100321e79*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321e80*/
                                  {
                                    v23 = v58; /*0x100321e86*/
                                    v33 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v58, v59); /*0x100321e91*/
                                    if ( v34 == 5 ) /*0x100321e9a*/
                                    {
                                      if ( !(*(_DWORD *)v33 ^ 0x30303032 | *(unsigned __int8 *)(v33 + 4) ^ 0x30) ) /*0x100321ef1*/
                                        goto LABEL_149; /*0x100321ef1*/
                                      v3 = 0; /*0x100321f09*/
                                      if ( !(*(_DWORD *)v33 ^ 0x30303031 | *(unsigned __int8 *)(v33 + 4) ^ 0x30) ) /*0x100321f13*/
                                        goto LABEL_150; /*0x100321f13*/
                                    }
                                    else if ( v34 == 3 ) /*0x100321ea0*/
                                    {
                                      if ( !(*(_WORD *)v33 ^ 0x3032 | *(unsigned __int8 *)(v33 + 2) ^ 0x30) ) /*0x100321eb5*/
                                        goto LABEL_149; /*0x100321eb5*/
                                      v3 = 0; /*0x100321ece*/
                                      if ( !(*(_WORD *)v33 ^ 0x3031 | *(unsigned __int8 *)(v33 + 2) ^ 0x30) ) /*0x100321ecb*/
                                        goto LABEL_150; /*0x100321ed8*/
                                    }
                                    if ( v22 ) /*0x100321f1c*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x100321f29*/
                                  }
                                }
                                v35 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100321f41*/
                                        v47,
                                        "/price/amount/unit_amount/monthly_amount/amount",
                                        13);
                                if ( v35 ) /*0x100321f49*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v35); /*0x100321f56*/
                                  v22 = v57; /*0x100321f5b*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100321f62*/
                                  {
                                    v23 = v58; /*0x100321f68*/
                                    v36 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v58, v59); /*0x100321f73*/
                                    if ( v37 == 3 ) /*0x100321f7c*/
                                    {
                                      if ( !(*(_WORD *)v36 ^ 0x3032 | *(unsigned __int8 *)(v36 + 2) ^ 0x30) ) /*0x100321fd2*/
                                        goto LABEL_149; /*0x100321fd2*/
                                      v3 = 0; /*0x100321feb*/
                                      if ( !(*(_WORD *)v36 ^ 0x3031 | *(unsigned __int8 *)(v36 + 2) ^ 0x30) ) /*0x100321ff5*/
                                        goto LABEL_150; /*0x100321ff5*/
                                    }
                                    else if ( v37 == 5 ) /*0x100321f82*/
                                    {
                                      if ( !(*(_DWORD *)v36 ^ 0x30303032 | *(unsigned __int8 *)(v36 + 4) ^ 0x30) ) /*0x100321f96*/
                                        goto LABEL_149; /*0x100321f96*/
                                      v3 = 0; /*0x100321fae*/
                                      if ( !(*(_DWORD *)v36 ^ 0x30303031 | *(unsigned __int8 *)(v36 + 4) ^ 0x30) ) /*0x100321fac*/
                                        goto LABEL_150; /*0x100321fb8*/
                                    }
                                    if ( v22 ) /*0x100321ffe*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x10032200b*/
                                  }
                                }
                                v38 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100322023*/
                                        v47,
                                        "/unit_amount/monthly_amount/amount",
                                        12);
                                if ( v38 ) /*0x10032202b*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v38); /*0x100322038*/
                                  v22 = v57; /*0x10032203d*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100322044*/
                                  {
                                    v23 = v58; /*0x10032204a*/
                                    v39 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v58, v59); /*0x100322055*/
                                    if ( v40 == 3 ) /*0x10032205e*/
                                    {
                                      if ( !(*(_WORD *)v39 ^ 0x3032 | *(unsigned __int8 *)(v39 + 2) ^ 0x30) ) /*0x1003220b4*/
                                        goto LABEL_149; /*0x1003220b4*/
                                      v3 = 0; /*0x1003220cd*/
                                      if ( !(*(_WORD *)v39 ^ 0x3031 | *(unsigned __int8 *)(v39 + 2) ^ 0x30) ) /*0x1003220d7*/
                                        goto LABEL_150; /*0x1003220d7*/
                                    }
                                    else if ( v40 == 5 ) /*0x100322064*/
                                    {
                                      if ( !(*(_DWORD *)v39 ^ 0x30303032 | *(unsigned __int8 *)(v39 + 4) ^ 0x30) ) /*0x100322078*/
                                        goto LABEL_149; /*0x100322078*/
                                      v3 = 0; /*0x100322090*/
                                      if ( !(*(_DWORD *)v39 ^ 0x30303031 | *(unsigned __int8 *)(v39 + 4) ^ 0x30) ) /*0x10032208e*/
                                        goto LABEL_150; /*0x10032209a*/
                                    }
                                    if ( v22 ) /*0x1003220e0*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1003220ed*/
                                  }
                                }
                                v41 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x100322105*/
                                        v47,
                                        "/monthly_amount/amount",
                                        15);
                                if ( v41 ) /*0x10032210d*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v41); /*0x10032211a*/
                                  v22 = v57; /*0x10032211f*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100322126*/
                                  {
                                    v23 = v58; /*0x10032212c*/
                                    v42 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v58, v59); /*0x100322137*/
                                    if ( v43 == 3 ) /*0x100322140*/
                                    {
                                      if ( !(*(_WORD *)v42 ^ 0x3032 | *(unsigned __int8 *)(v42 + 2) ^ 0x30) ) /*0x100322196*/
                                        goto LABEL_149; /*0x100322196*/
                                      v3 = 0; /*0x1003221af*/
                                      if ( !(*(_WORD *)v42 ^ 0x3031 | *(unsigned __int8 *)(v42 + 2) ^ 0x30) ) /*0x1003221b9*/
                                        goto LABEL_150; /*0x1003221b9*/
                                    }
                                    else if ( v43 == 5 ) /*0x100322146*/
                                    {
                                      if ( !(*(_DWORD *)v42 ^ 0x30303032 | *(unsigned __int8 *)(v42 + 4) ^ 0x30) ) /*0x10032215a*/
                                        goto LABEL_149; /*0x10032215a*/
                                      v3 = 0; /*0x100322172*/
                                      if ( !(*(_DWORD *)v42 ^ 0x30303031 | *(unsigned __int8 *)(v42 + 4) ^ 0x30) ) /*0x100322170*/
                                        goto LABEL_150; /*0x10032217c*/
                                    }
                                    if ( v22 ) /*0x1003221c2*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1003221cf*/
                                  }
                                }
                                v44 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(v47, "/amount", 7); /*0x1003221e7*/
                                if ( v44 ) /*0x1003221ef*/
                                {
                                  codexmate_lib::core::plan_mapping::json_scalar_to_string::h24c8aa850a22b99a(&v57, v44); /*0x1003221fc*/
                                  v22 = v57; /*0x100322201*/
                                  if ( v57 != 0x8000000000000000LL ) /*0x100322208*/
                                  {
                                    v23 = v58; /*0x10032220e*/
                                    v45 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v58, v59); /*0x100322219*/
                                    if ( v46 == 3 ) /*0x100322222*/
                                    {
                                      if ( !(*(_WORD *)v45 ^ 0x3032 | *(unsigned __int8 *)(v45 + 2) ^ 0x30) ) /*0x100322271*/
                                      {
LABEL_149:
                                        LOBYTE(v3) = 3; /*0x1003222b8*/
                                        goto LABEL_151; /*0x1003222bb*/
                                      }
                                      v3 = 0; /*0x100322286*/
                                      if ( !(*(_WORD *)v45 ^ 0x3031 | *(unsigned __int8 *)(v45 + 2) ^ 0x30) ) /*0x100322290*/
                                      {
LABEL_150:
                                        LOBYTE(v3) = 2; /*0x1003222bd*/
LABEL_151:
                                        if ( v22 ) /*0x1003222c3*/
                                        {
                                          v18 = v23; /*0x1003222ce*/
                                          v17 = v22; /*0x1003222d1*/
LABEL_43:
                                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x100321a46*/
                                        }
                                        return v3; /*0x100321a46*/
                                      }
                                    }
                                    else if ( v46 == 5 ) /*0x100322228*/
                                    {
                                      if ( !(*(_DWORD *)v45 ^ 0x30303032 | *(unsigned __int8 *)(v45 + 4) ^ 0x30) ) /*0x10032223c*/
                                        goto LABEL_149; /*0x10032223c*/
                                      v3 = 0; /*0x100322250*/
                                      if ( !(*(_DWORD *)v45 ^ 0x30303031 | *(unsigned __int8 *)(v45 + 4) ^ 0x30) ) /*0x10032224e*/
                                        goto LABEL_150; /*0x10032225a*/
                                    }
                                    if ( v22 ) /*0x100322295*/
                                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1003222a6*/
                                  }
                                }
                              }
                              v16 += 2; /*0x100321a5d*/
                              if ( v16 == 9 ) /*0x100321a65*/
                              {
                                LOBYTE(v3) = 8; /*0x1003222b0*/
                                return v3; /*0x1003222b3*/
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v17 = v48; /*0x100321a32*/
  if ( v48 ) /*0x100321a3c*/
  {
    v18 = v2; /*0x100321a43*/
    goto LABEL_43; /*0x100321a43*/
  }
  return v3; /*0x100321a4e*/
}