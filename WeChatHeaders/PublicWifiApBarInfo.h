//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PublicWifiApBarInfo : NSObject
{
    NSString *m_ssid;
    NSString *m_mac;
    int m_signal;
}

@property(nonatomic) int m_signal; // @synthesize m_signal;
@property(retain, nonatomic) NSString *m_mac; // @synthesize m_mac;
@property(retain, nonatomic) NSString *m_ssid; // @synthesize m_ssid;
- (void).cxx_destruct;

@end

