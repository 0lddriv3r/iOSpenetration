//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MidasIAPNavCtrl, UIViewController;

@interface MidasIAPCtrlMgr : NSObject
{
    MidasIAPNavCtrl *_nav;
    BOOL _needShowLoadingAfterDismiss;
    UIViewController *_rootViewController;
}

+ (void)deInstance;
+ (id)instance;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (id)topViewController;
- (unsigned int)getViewControllerCount;
- (void)dismiss;
- (void)popCtrl:(BOOL)arg1;
- (void)pushCtrl:(id)arg1 ainimated:(BOOL)arg2;
- (BOOL)hasUi;

@end

