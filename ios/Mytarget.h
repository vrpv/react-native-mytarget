
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNMytargetSpec.h"

@interface Mytarget : NSObject <NativeMytargetSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Mytarget : NSObject <RCTBridgeModule>
#endif

@end
