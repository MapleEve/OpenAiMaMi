// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x100431bc0 depth=1
// std2io5Write9write_all
_UNKNOWN **__fastcall std::io::Write::write_all::h82bde2235fecb8a8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r13

  if ( a3 ) /*0x100431bd1*/
  {
    v3 = a3; /*0x100431bd7*/
    do /*0x100431c19*/
    {
      if ( (_$LT$std..fs..File$u20$as$u20$std..io..Write$GT$::write::h3cf8249db2921ec1(a1, a2, v3) & 1) != 0 ) /*0x100431c29*/
      {
        switch ( v5 & 3 ) /*0x100431c38*/
        {
          case 0uLL: /*0x100431c38*/
            if ( *(_BYTE *)(v5 + 16) != 35 ) /*0x100431c3e*/
              return (_UNKNOWN **)v5; /*0x100431c3e*/
            break; /*0x100431c3e*/
          case 1uLL: /*0x100431c38*/
            if ( *(_BYTE *)(v5 + 15) != 35 ) /*0x100431c88*/
              return (_UNKNOWN **)v5; /*0x100431c88*/
            v6 = *(_QWORD *)(v5 + 7); /*0x100431c98*/
            if ( *(_QWORD *)v6 ) /*0x100431c9c*/
              (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v5 - 1)); /*0x100431ca8*/
            if ( *(_QWORD *)(v6 + 8) ) /*0x100431caa*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100431cba*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100431ccd*/
            break; /*0x100431ce3*/
          case 2uLL: /*0x100431c38*/
            if ( (v5 & 0xFFFFFFFF00000000LL) == 0x400000000LL ) /*0x100431c06*/
              break; /*0x100431c06*/
            return (_UNKNOWN **)v5; /*0x100431c06*/
          case 3uLL: /*0x100431c38*/
            if ( (v5 & 0xFFFFFFFF00000000LL) != 0x2300000000LL ) /*0x100431c80*/
              return (_UNKNOWN **)v5; /*0x100431c80*/
            break; /*0x100431c80*/
        }
      }
      else
      {
        if ( !v5 ) /*0x100431c53*/
          return &anon_fa700c1a43d52b7c25cc5c59994db220_78; /*0x100431d03*/
        if ( v3 < v5 ) /*0x100431c5f*/
          core::slice::index::slice_index_fail::ha8cca78aa5d38c2d( /*0x100431d15*/
            v5,
            v3,
            v3,
            (__int64)&anon_fa700c1a43d52b7c25cc5c59994db220_80);
        a2 += v5; /*0x100431c65*/
        v3 -= v5; /*0x100431c68*/
      }
    }
    while ( v3 ); /*0x100431c19*/
  }
  return nullptr; /*0x100431cf1*/
}