// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x101212bc0 d=2
id __fastcall objc2::runtime::__nsstring::nsstring_to_str::h430c73cbc08fdf97(id a1)
{
  id v1; // r14

  if ( !objc2::runtime::__nsstring::nsstring_to_str::CACHED_SEL::h7b918099d207d643 ) /*0x101212bd4*/
    objc2::runtime::__nsstring::nsstring_to_str::CACHED_SEL::h7b918099d207d643 = (SEL)objc2::runtime::Sel::register_unchecked::hff6f4cfe52253764("UTF8String"); /*0x101212c14*/
  v1 = objc_msgSend(a1, objc2::runtime::__nsstring::nsstring_to_str::CACHED_SEL::h7b918099d207d643); /*0x101212bde*/
  if ( !objc2::runtime::__nsstring::nsstring_len::CACHED_SEL::haa0e94ed9bfe1500 ) /*0x101212beb*/
    objc2::runtime::__nsstring::nsstring_len::CACHED_SEL::haa0e94ed9bfe1500 = (SEL)objc2::runtime::Sel::register_unchecked::hff6f4cfe52253764("lengthOfBytesUsingEncoding:"); /*0x101212c2c*/
  objc_msgSend(a1, objc2::runtime::__nsstring::nsstring_len::CACHED_SEL::haa0e94ed9bfe1500, 4); /*0x101212bf5*/
  return v1; /*0x101212c00*/
}