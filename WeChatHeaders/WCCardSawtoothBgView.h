//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface WCCardSawtoothBgView : UIView
{
    int _sawtoothRadius;
    UIColor *_sawtoothColor;
    int _sawtoothInterval;
}

@property(nonatomic) int sawtoothInterval; // @synthesize sawtoothInterval=_sawtoothInterval;
@property(retain, nonatomic) UIColor *sawtoothColor; // @synthesize sawtoothColor=_sawtoothColor;
@property(nonatomic) int sawtoothRadius; // @synthesize sawtoothRadius=_sawtoothRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end
