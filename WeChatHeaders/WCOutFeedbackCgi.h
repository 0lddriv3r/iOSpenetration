//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCOutFeedbackCgi : NSObject <PBMessageObserverDelegate>
{
    unsigned long _eventID;
}

@property(nonatomic) unsigned long eventID; // @synthesize eventID=_eventID;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)sendrequest:(int)arg1 star:(int)arg2 FbCount:(int)arg3 Fblist:(id)arg4;
- (void)dealloc;

@end
