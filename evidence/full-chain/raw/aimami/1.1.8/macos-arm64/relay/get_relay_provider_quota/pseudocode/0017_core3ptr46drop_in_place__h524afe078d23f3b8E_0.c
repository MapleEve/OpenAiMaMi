// mac 1.1.8 get_relay_provider_quota node va=0x1000cd970 depth=4
// core3ptr46drop_in_place::h524afe078d23f3b8E_0
volatile signed __int64 *__fastcall core::ptr::drop_in_place$LT$tokio..time..sleep..Sleep$GT$::h524afe078d23f3b8(
        __int64 a1)
{
  volatile signed __int64 **v2; // rdi
  volatile signed __int64 *result; // rax

  tokio::runtime::time::entry::_::_$LT$impl$u20$core..ops..drop..Drop$u20$for$u20$tokio..runtime..time..entry..TimerEntry$GT$::drop::he5cadf9634a2230f(); /*0x1000cd97a*/
  v2 = (volatile signed __int64 **)(a1 + 8); /*0x1000cd97f*/
  if ( *(_BYTE *)a1 ) /*0x1000cd983*/
  {
    result = *v2; /*0x1000cd988*/
    if ( !_InterlockedDecrement64(*v2) ) /*0x1000cd98b*/
      result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hdd89cccd96410b35(); /*0x1000cd991*/
  }
  else
  {
    result = *v2; /*0x1000cd998*/
    if ( !_InterlockedDecrement64(*v2) ) /*0x1000cd99b*/
      result = (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h02ebab068a98fde1(); /*0x1000cd9a1*/
  }
  if ( *(_QWORD *)(a1 + 16) ) /*0x1000cd9a6*/
  {
    result = *(volatile signed __int64 **)(a1 + 56); /*0x1000cd9ad*/
    if ( result ) /*0x1000cd9b4*/
      return (volatile signed __int64 *)(*((__int64 (__fastcall **)(_QWORD))result + 3))(*(_QWORD *)(a1 + 64)); /*0x1000cd9be*/
  }
  return result; /*0x1000cd9c1*/
}