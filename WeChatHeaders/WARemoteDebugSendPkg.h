//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WARemoteDebugSendPkg : NSObject
{
    NSString *_uuid;
    NSData *_data;
    unsigned long _minSeq;
    unsigned long _maxSeq;
    unsigned long _timestap;
}

@property(nonatomic) unsigned long timestap; // @synthesize timestap=_timestap;
@property(nonatomic) unsigned long maxSeq; // @synthesize maxSeq=_maxSeq;
@property(nonatomic) unsigned long minSeq; // @synthesize minSeq=_minSeq;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;

@end

