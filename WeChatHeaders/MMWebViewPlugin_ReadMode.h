//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface MMWebViewPlugin_ReadMode : MMWebViewPluginBase <PBMessageObserverDelegate>
{
    unsigned long uiCurrentEventID;
    NSString *nsUrlOfReadingMode;
    NSString *nsUrlOfReadModeOriginal;
}

@property(retain, nonatomic) NSString *nsUrlOfReadModeOriginal; // @synthesize nsUrlOfReadModeOriginal;
@property(retain, nonatomic) NSString *nsUrlOfReadingMode; // @synthesize nsUrlOfReadingMode;
@property(nonatomic) unsigned long uiCurrentEventID; // @synthesize uiCurrentEventID;
- (void).cxx_destruct;
- (BOOL)canShowReadingMode;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)GetReadingModeUrlFromServer:(id)arg1 andUserAgent:(id)arg2;
- (void)StopReadingMode;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end
