// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x100bb0530 d=1
char __fastcall _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rax
  char result; // al
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, char *, __int64); // rax
  char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int8 *v9; // rdx
  __int64 v10; // rdx
  char v11; // bl
  __int64 v12; // [rsp+8h] [rbp-88h] BYREF
  __int64 v13; // [rsp+10h] [rbp-80h] BYREF
  __int64 v14; // [rsp+18h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-70h] BYREF
  __int64 v16; // [rsp+28h] [rbp-68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-60h] BYREF
  __int64 *v18; // [rsp+38h] [rbp-58h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+40h] [rbp-50h]
  __int64 *v20; // [rsp+48h] [rbp-48h]
  __int64 (__fastcall *v21)(); // [rsp+50h] [rbp-40h]
  __int64 *v22; // [rsp+58h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+60h] [rbp-30h]
  _QWORD v24[5]; // [rsp+68h] [rbp-28h] BYREF

  v2 = 20; /*0x100bb0553*/
  if ( *(__int64 *)a1 < 0 ) /*0x100bb0558*/
    v2 = *(_QWORD *)a1 ^ 0x8000000000000000LL; /*0x100bb0558*/
  switch ( v2 ) /*0x100bb056a*/
  {
    case 0uLL: /*0x100bb056a*/
      if ( *(_QWORD *)(a1 + 8) != 0x8000000000000000LL ) /*0x100bb0570*/
      {
        v24[0] = a1 + 8; /*0x100bb09e2*/
        v18 = v24; /*0x100bb09ea*/
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6edfed603eb722fe; /*0x100bb09f5*/
        v7 = *a2; /*0x100bb09f9*/
        v8 = a2[1]; /*0x100bb09fc*/
        v9 = byte_1016F10F6; /*0x100bb0a00*/
        return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb0a07*/
      }
      return _$LT$libsqlite3_sys..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h46b1c29a1d0e6067(a1 + 32); /*0x100bb0584*/
    case 1uLL: /*0x100bb056a*/
      return (*(__int64 (__fastcall **)(__int64, const char *, __int64))(a2[1] + 24))( /*0x100bb07ff*/
               *a2,
               "SQLite was compiled or configured for single-threaded use onlyExecute returned results - did you mean to "
               "call query?Query returned no rowsQuery returned more than one rowQuery is not read-onlyunwinding panicMul"
               "tiple statements provided",
               62);
    case 2uLL: /*0x100bb056a*/
      v15 = *(_QWORD *)(a1 + 24); /*0x100bb06a3*/
      v17 = a1 + 32; /*0x100bb06ab*/
      v24[0] = a1 + 8; /*0x100bb06b3*/
      if ( v15 != -1 ) /*0x100bb06bb*/
      {
        v18 = &v17; /*0x100bb06c5*/
        v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb4eb4e70ad54d0ea; /*0x100bb06d0*/
        v20 = &v15; /*0x100bb06d8*/
        v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb06e3*/
        v22 = v24; /*0x100bb06eb*/
        v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ca4eeacd4c3e80e; /*0x100bb06f6*/
        v7 = *a2; /*0x100bb06fa*/
        v8 = a2[1]; /*0x100bb06fd*/
        v9 = (unsigned __int8 *)&unk_10170657B; /*0x100bb0701*/
        return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb0708*/
      }
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 8)); /*0x100bb0a26*/
    case 3uLL: /*0x100bb056a*/
      v14 = *(_QWORD *)(a1 + 8); /*0x100bb072c*/
      v24[0] = *(_QWORD *)(a1 + 16); /*0x100bb0734*/
      v18 = v24; /*0x100bb0746*/
      v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x100bb0751*/
      if ( v14 == -1 ) /*0x100bb073c*/
      {
        v7 = *a2; /*0x100bb0a3b*/
        v8 = a2[1]; /*0x100bb0a3e*/
        v9 = (unsigned __int8 *)&unk_1017065AA; /*0x100bb0a42*/
      }
      else
      {
        v20 = &v14; /*0x100bb0759*/
        v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb0764*/
        v7 = *a2; /*0x100bb0768*/
        v8 = a2[1]; /*0x100bb076b*/
        v9 = (unsigned __int8 *)&unk_1017065C3; /*0x100bb076f*/
      }
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb0776*/
    case 4uLL: /*0x100bb056a*/
      v13 = *(_QWORD *)(a1 + 8); /*0x100bb0600*/
      v12 = a1 + 16; /*0x100bb0608*/
      if ( v13 == -1 ) /*0x100bb0613*/
        return _$LT$core..str..error..Utf8Error$u20$as$u20$core..fmt..Display$GT$::fmt::h97aa6eb7eded4139(); /*0x100bb0a13*/
      v18 = &v12; /*0x100bb0620*/
      v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd4dd8d3fcdb8052d; /*0x100bb062b*/
      v20 = &v13; /*0x100bb0633*/
      v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb063e*/
      v7 = *a2; /*0x100bb0642*/
      v8 = a2[1]; /*0x100bb0645*/
      v9 = (unsigned __int8 *)&unk_1017065E7; /*0x100bb0649*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18);
    case 5uLL: /*0x100bb056a*/
      return _$LT$alloc..ffi..c_str..NulError$u20$as$u20$core..fmt..Display$GT$::fmt::hcdbfbbb1238495fb(a1 + 8); /*0x100bb0885*/
    case 6uLL: /*0x100bb056a*/
      v24[0] = a1 + 8; /*0x100bb0920*/
      v18 = v24; /*0x100bb0928*/
      v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6edfed603eb722fe; /*0x100bb0933*/
      v7 = *a2; /*0x100bb0937*/
      v8 = a2[1]; /*0x100bb093a*/
      v9 = (unsigned __int8 *)&unk_1017065F5; /*0x100bb093e*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb0945*/
    case 7uLL: /*0x100bb056a*/
      alloc::string::String::from_utf8_lossy::he2f4710de0078f8b( /*0x100bb0790*/
        (unsigned __int64 *)&v18,
        *(_QWORD *)(a1 + 16),
        *(_QWORD *)(a1 + 24));
      v24[0] = &v18; /*0x100bb0795*/
      v24[1] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he8f9913113c1108e; /*0x100bb07a0*/
      result = core::fmt::write::h2e5a8157a38fb62d(*a2, a2[1], byte_101706610, (unsigned __int64)v24); /*0x100bb07b6*/
      if ( v18 != (__int64 *)0x8000000000000000LL && v18 ) /*0x100bb07cb*/
      {
        v11 = result; /*0x100bb07da*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100bb07dc*/
        return v11; /*0x100bb07e1*/
      }
      return result; /*0x100bb07e3*/
    case 8uLL: /*0x100bb056a*/
      v4 = *a2; /*0x100bb097c*/
      v5 = *(__int64 (__fastcall **)(__int64, char *, __int64))(a2[1] + 24); /*0x100bb0983*/
      v6 = "Execute returned results - did you mean to call query?Query returned no rowsQuery returned more than one rowQuery is not read-onlyunwinding panicMultiple statements provided"; /*0x100bb0987*/
      v10 = 54; /*0x100bb098e*/
      return v5(v4, v6, v10); /*0x100bb098e*/
    case 9uLL: /*0x100bb056a*/
      v4 = *a2; /*0x100bb0683*/
      v5 = *(__int64 (__fastcall **)(__int64, char *, __int64))(a2[1] + 24); /*0x100bb068a*/
      v6 = "Query returned no rowsQuery returned more than one rowQuery is not read-onlyunwinding panicMultiple statements provided"; /*0x100bb068e*/
      goto LABEL_13; /*0x100bb068e*/
    case 0xAuLL: /*0x100bb056a*/
      return (*(__int64 (__fastcall **)(__int64, char *, __int64))(a2[1] + 24))( /*0x100bb097a*/
               *a2,
               "Query returned more than one rowQuery is not read-onlyunwinding panicMultiple statements provided",
               32);
    case 0xBuLL: /*0x100bb056a*/
      v24[0] = *(_QWORD *)(a1 + 8); /*0x100bb05d2*/
      v18 = v24; /*0x100bb05da*/
      v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb05e5*/
      v7 = *a2; /*0x100bb05e9*/
      v8 = a2[1]; /*0x100bb05ec*/
      v9 = (unsigned __int8 *)&unk_101706621; /*0x100bb05f0*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb05f7*/
    case 0xCuLL: /*0x100bb056a*/
      v24[0] = a1 + 8; /*0x100bb0659*/
      v18 = v24; /*0x100bb0661*/
      v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6edfed603eb722fe; /*0x100bb066c*/
      v7 = *a2; /*0x100bb0670*/
      v8 = a2[1]; /*0x100bb0673*/
      v9 = (unsigned __int8 *)&unk_10170663A; /*0x100bb0677*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb067e*/
    case 0xDuLL: /*0x100bb056a*/
      v16 = *(_QWORD *)(a1 + 32); /*0x100bb08bc*/
      v17 = a1 + 8; /*0x100bb08c4*/
      v24[0] = a1 + 40; /*0x100bb08cc*/
      v18 = v24; /*0x100bb08d4*/
      v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb4eb4e70ad54d0ea; /*0x100bb08df*/
      v20 = &v16; /*0x100bb08e7*/
      v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb08f2*/
      v22 = &v17; /*0x100bb08fa*/
      v23 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6edfed603eb722fe; /*0x100bb0905*/
      v7 = *a2; /*0x100bb0909*/
      v8 = a2[1]; /*0x100bb090c*/
      v9 = (unsigned __int8 *)&unk_101706652; /*0x100bb0910*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb0917*/
    case 0xEuLL: /*0x100bb056a*/
      v24[0] = *(_QWORD *)(a1 + 8); /*0x100bb05a4*/
      v18 = v24; /*0x100bb05ac*/
      v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb05b7*/
      v7 = *a2; /*0x100bb05bb*/
      v8 = a2[1]; /*0x100bb05be*/
      v9 = (unsigned __int8 *)&unk_101706680; /*0x100bb05c2*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb05c9*/
    case 0xFuLL: /*0x100bb056a*/
      return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 8)); /*0x100bb0726*/
    case 0x10uLL: /*0x100bb056a*/
      v4 = *a2; /*0x100bb0589*/
      v5 = *(__int64 (__fastcall **)(__int64, char *, __int64))(a2[1] + 24); /*0x100bb0590*/
      v6 = "Query is not read-onlyunwinding panicMultiple statements provided"; /*0x100bb0594*/
LABEL_13:
      v10 = 22; /*0x100bb0695*/
      return v5(v4, v6, v10); /*0x100bb099d*/
    case 0x11uLL: /*0x100bb056a*/
      return (*(__int64 (__fastcall **)(__int64, char *, __int64))(a2[1] + 24))( /*0x100bb081b*/
               *a2,
               "unwinding panicMultiple statements provided",
               15);
    case 0x12uLL: /*0x100bb056a*/
      return (*(__int64 (__fastcall **)(__int64, char *, __int64))(a2[1] + 24))(*a2, "Multiple statements provided", 28); /*0x100bb0961*/
    case 0x13uLL: /*0x100bb056a*/
      v17 = *(_QWORD *)(a1 + 8); /*0x100bb09a3*/
      v24[0] = *(_QWORD *)(a1 + 16); /*0x100bb09ab*/
      v18 = &v17; /*0x100bb09b3*/
      v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb09be*/
      v20 = v24; /*0x100bb09c6*/
      v21 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb09ca*/
      v7 = *a2; /*0x100bb09ce*/
      v8 = a2[1]; /*0x100bb09d1*/
      v9 = (unsigned __int8 *)&unk_101706697; /*0x100bb09d5*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb09dc*/
    case 0x14uLL: /*0x100bb056a*/
      v17 = a1; /*0x100bb0820*/
      LODWORD(v16) = *(_DWORD *)(a1 + 56); /*0x100bb0827*/
      v24[0] = a1 + 24; /*0x100bb082e*/
      v18 = &v17; /*0x100bb0836*/
      v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6edfed603eb722fe; /*0x100bb0841*/
      v20 = v24; /*0x100bb0849*/
      v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6edfed603eb722fe; /*0x100bb084d*/
      v22 = &v16; /*0x100bb0855*/
      v23 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x100bb0860*/
      v7 = *a2; /*0x100bb0864*/
      v8 = a2[1]; /*0x100bb0867*/
      v9 = (unsigned __int8 *)&unk_1017066D5; /*0x100bb086b*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb0872*/
    case 0x15uLL: /*0x100bb056a*/
      v24[0] = *(_QWORD *)(a1 + 8); /*0x100bb088e*/
      v18 = v24; /*0x100bb0896*/
      v19 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100bb08a1*/
      v7 = *a2; /*0x100bb08a5*/
      v8 = a2[1]; /*0x100bb08a8*/
      v9 = (unsigned __int8 *)&unk_1017066EA; /*0x100bb08ac*/
      return core::fmt::write::h2e5a8157a38fb62d(v7, v8, v9, (unsigned __int64)&v18); /*0x100bb08b3*/
  }
}