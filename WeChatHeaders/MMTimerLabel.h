//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface MMTimerLabel : UILabel
{
    int _second;
    int _minute;
    int _hour;
    BOOL _isShowHourDefault;
    BOOL _isActive;
}

@property(nonatomic) int hour; // @synthesize hour=_hour;
@property(nonatomic) int minute; // @synthesize minute=_minute;
@property(nonatomic) int second; // @synthesize second=_second;
- (void)dealloc;
- (void)pauseTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)reset;
- (void)setIsShowHourDefault:(BOOL)arg1;
- (void)increaseTime;
- (void)updateLabel;

@end

