//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EJJavaScriptView, NSDate;

@interface EJTimer : NSObject
{
    double interval;
    struct OpaqueJSValue *callback;
    BOOL active;
    BOOL repeat;
    EJJavaScriptView *scriptView;
    NSDate *_target;
}

@property(retain, nonatomic) NSDate *target; // @synthesize target=_target;
@property(readonly) BOOL active; // @synthesize active;
- (void)check;
- (void)dealloc;
- (id)initWithScriptView:(id)arg1 callback:(struct OpaqueJSValue *)arg2 interval:(double)arg3 repeat:(BOOL)arg4;

@end

