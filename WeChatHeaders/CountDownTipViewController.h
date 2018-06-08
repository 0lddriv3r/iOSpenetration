//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTipsViewController.h"

@class CADisplayLink, NSString;

@interface CountDownTipViewController : MMTipsViewController
{
    CADisplayLink *m_timer;
    unsigned long m_uiCurrentCount;
    id m_userData;
    NSString *m_nsTipViewMessage;
    unsigned long m_uiCountDown;
}

@property(retain, nonatomic) id m_userData; // @synthesize m_userData;
@property(nonatomic) unsigned long m_uiCountDown; // @synthesize m_uiCountDown;
@property(retain, nonatomic) NSString *m_nsTipViewMessage; // @synthesize m_nsTipViewMessage;
- (void).cxx_destruct;
- (void)showWithAnimated:(int)arg1;
- (void)countDownTip;
- (void)dealloc;

@end
