//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CContact;

@protocol JSApiSelectSessionViewControllerDelegate
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(CContact *)arg1 atScene:(unsigned long)arg2;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(CContact *)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
@end

