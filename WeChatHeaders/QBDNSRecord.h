//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QBDNSRecord : NSObject
{
    BOOL _expired;
    NSString *_value;
    int _ttl;
    long long _timeStamp;
}

@property(readonly, nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, nonatomic) int ttl; // @synthesize ttl=_ttl;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)expired;
- (id)init:(id)arg1 ttl:(int)arg2;

@end

