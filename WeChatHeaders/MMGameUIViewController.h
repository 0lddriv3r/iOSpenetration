//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSMutableArray;

@interface MMGameUIViewController : MMUIViewController
{
    BOOL _bTopWhiteStyle;
    BOOL _noNeedReport;
    int _sourceScene;
    int _currentScene;
    NSMutableArray *_visibleStateArray;
}

@property(retain, nonatomic) NSMutableArray *visibleStateArray; // @synthesize visibleStateArray=_visibleStateArray;
@property(nonatomic) int currentScene; // @synthesize currentScene=_currentScene;
@property(nonatomic) int sourceScene; // @synthesize sourceScene=_sourceScene;
@property(nonatomic) BOOL noNeedReport; // @synthesize noNeedReport=_noNeedReport;
@property(nonatomic) BOOL bTopWhiteStyle; // @synthesize bTopWhiteStyle=_bTopWhiteStyle;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)OnReturn;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (unsigned int)calcForegroundTimeDuration;
- (id)getStatStr:(unsigned int)arg1 ForegroundTime:(unsigned int)arg2;
- (BOOL)pageTimeReport;
- (BOOL)addVisibleState:(BOOL)arg1 Reason:(id)arg2;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)removeNotificationObservers;
- (void)initNotificationObservers;
- (void)dealloc;
- (id)initWithSourceScene:(int)arg1 CurrentScene:(int)arg2;

@end
