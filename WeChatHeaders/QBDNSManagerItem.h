//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate;

@interface QBDNSManagerItem : NSObject
{
    NSArray *_records;
    int _status;
    int _err;
    NSDate *_badDate;
}

@property(retain) NSDate *badDate; // @synthesize badDate=_badDate;
@property int err; // @synthesize err=_err;
@property int status; // @synthesize status=_status;
@property(retain) NSArray *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

