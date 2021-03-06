//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class WAGameEntryInfo;

@interface WAMainListGameEntryLogic : MMObject <PBMessageObserverDelegate>
{
    BOOL _clicked;
    BOOL _allowGameEntry;
    id <WAMainListGameEntryLogicDelegate> _delegate;
    unsigned int _status;
    WAGameEntryInfo *_gameEntryInfo;
}

@property(nonatomic) BOOL allowGameEntry; // @synthesize allowGameEntry=_allowGameEntry;
@property(retain, nonatomic) WAGameEntryInfo *gameEntryInfo; // @synthesize gameEntryInfo=_gameEntryInfo;
@property(nonatomic) BOOL clicked; // @synthesize clicked=_clicked;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) __weak id <WAMainListGameEntryLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)parseGameEntryInfoFromResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)startUpdateGameEntry;
- (void)updateGameEntry;
- (BOOL)shouldShowGameEntry;
- (BOOL)getAllowGameEntryStatus;
- (void)dealloc;
- (id)init;

@end

