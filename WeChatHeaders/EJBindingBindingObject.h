//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EJBindingEventedBase.h"

@class EJBindingGlobalUtils;

@interface EJBindingBindingObject : EJBindingEventedBase
{
    BOOL stopRender;
    EJBindingGlobalUtils *global;
}

+ (void *)_ptr_to_get___id;
@property(nonatomic) BOOL stopRender; // @synthesize stopRender;
- (struct OpaqueJSValue *)_get___id:(struct OpaqueJSContext *)arg1;
- (void)prepareGarbageCollection;
- (void)createWithJSObject:(struct OpaqueJSValue *)arg1 scriptView:(id)arg2;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end
