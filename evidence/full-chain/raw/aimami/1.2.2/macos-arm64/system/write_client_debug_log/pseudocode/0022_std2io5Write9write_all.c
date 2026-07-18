// mac 1.2.2 NEW write_client_debug_log 0x100331170 d=3
_UNKNOWN **__fastcall std::io::Write::write_all::ha7991334f9d9412b(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r13

  if ( a3 ) /*0x100331181*/
  {
    v3 = a3; /*0x100331187*/
    do /*0x1003311c9*/
    {
      if ( (_$LT$std..fs..File$u20$as$u20$std..io..Write$GT$::write::h3cf8249db2921ec1(a1, a2, v3) & 1) != 0 ) /*0x1003311d9*/
      {
        switch ( v5 & 3 ) /*0x1003311e8*/
        {
          case 0uLL: /*0x1003311e8*/
            if ( *(_BYTE *)(v5 + 16) != 35 ) /*0x1003311ee*/
              return (_UNKNOWN **)v5; /*0x1003311ee*/
            break; /*0x1003311ee*/
          case 1uLL: /*0x1003311e8*/
            if ( *(_BYTE *)(v5 + 15) != 35 ) /*0x100331238*/
              return (_UNKNOWN **)v5; /*0x100331238*/
            v6 = *(_QWORD *)(v5 + 7); /*0x100331248*/
            if ( *(_QWORD *)v6 ) /*0x10033124c*/
              (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v5 - 1)); /*0x100331258*/
            if ( *(_QWORD *)(v6 + 8) ) /*0x10033125a*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10033126a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10033127d*/
            break; /*0x100331293*/
          case 2uLL: /*0x1003311e8*/
            if ( (v5 & 0xFFFFFFFF00000000LL) == 0x400000000LL ) /*0x1003311b6*/
              break; /*0x1003311b6*/
            return (_UNKNOWN **)v5; /*0x1003311b6*/
          case 3uLL: /*0x1003311e8*/
            if ( (v5 & 0xFFFFFFFF00000000LL) != 0x2300000000LL ) /*0x100331230*/
              return (_UNKNOWN **)v5; /*0x100331230*/
            break; /*0x100331230*/
        }
      }
      else
      {
        if ( !v5 ) /*0x100331203*/
          return &anon_89028fb7e9bc8caab153fb475db58618_241; /*0x1003312b3*/
        if ( v3 < v5 ) /*0x10033120f*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d( /*0x1003312c5*/
            v5,
            v3,
            v3,
            &anon_89028fb7e9bc8caab153fb475db58618_243);
        a2 += v5; /*0x100331215*/
        v3 -= v5; /*0x100331218*/
      }
    }
    while ( v3 ); /*0x1003311c9*/
  }
  return nullptr; /*0x1003312a1*/
}