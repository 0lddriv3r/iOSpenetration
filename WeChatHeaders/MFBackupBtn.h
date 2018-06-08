//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MFBanner.h"

@class MMUILabel, NSString, TextFlowView, UIImageView;

@interface MFBackupBtn : UIButton <MFBanner>
{
    MMUILabel *_textLabel;
    TextFlowView *_flowview;
    UIImageView *_iView;
    unsigned int _notifyCode;
    unsigned long long _currentSessionCount;
    unsigned long long _totalSessionCount;
    NSString *_lastImageName;
    NSString *_speedString;
}

- (void).cxx_destruct;
- (void)setSpeed:(float)arg1;
- (void)setCurrentSessionCount:(unsigned long long)arg1 totalSessionCount:(unsigned long long)arg2;
- (void)setNotifyCode:(unsigned int)arg1;
- (void)setupImage;
- (void)setupFlowTextView;
- (void)setupBackugroudColorWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

