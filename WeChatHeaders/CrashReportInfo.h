//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface CrashReportInfo : NSObject <NSCoding>
{
    unsigned long m_uiVersion;
    unsigned long m_uiReportCount;
    unsigned long m_uiReportSuccessCount;
    NSString *m_nsDate;
    NSString *m_nsCrashDumpMd5;
    NSString *m_nsCrashReportID;
}

@property(retain, nonatomic) NSString *m_nsCrashReportID; // @synthesize m_nsCrashReportID;
@property(retain, nonatomic) NSString *m_nsCrashDumpMd5; // @synthesize m_nsCrashDumpMd5;
@property(retain, nonatomic) NSString *m_nsDate; // @synthesize m_nsDate;
@property(nonatomic) unsigned long m_uiReportSuccessCount; // @synthesize m_uiReportSuccessCount;
@property(nonatomic) unsigned long m_uiReportCount; // @synthesize m_uiReportCount;
@property(nonatomic) unsigned long m_uiVersion; // @synthesize m_uiVersion;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)preInit;

@end

