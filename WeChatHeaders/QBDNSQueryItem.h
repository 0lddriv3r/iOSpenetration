//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, NSURLRequest;

@interface QBDNSQueryItem : NSObject
{
    NSURLRequest *_dnsRequest;
    NSURL *_originURL;
    int _status;
}

@property int status; // @synthesize status=_status;
@property(copy) NSURL *originURL; // @synthesize originURL=_originURL;
@property(retain) NSURLRequest *dnsRequest; // @synthesize dnsRequest=_dnsRequest;
- (void).cxx_destruct;

@end

