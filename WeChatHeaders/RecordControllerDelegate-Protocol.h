//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString, UIViewController;

@protocol RecordControllerDelegate <NSObject>
- (NSString *)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned long)CheckVoiceBtnState;
- (UIViewController *)getViewController;

@optional
- (BOOL)CanRemoteRecord;
- (void)SetButtonHighlighted:(BOOL)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)ShowCountingTips:(int)arg1;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(BOOL)arg1;
- (void)HideRecordTips;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)onRecordModMsg:(CMessageWrap *)arg1;
- (void)onRecordAddMsg:(CMessageWrap *)arg1;
- (void)onRecordTimeOut;
@end

