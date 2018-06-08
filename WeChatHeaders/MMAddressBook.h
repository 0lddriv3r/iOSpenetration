//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface MMAddressBook : NSObject
{
    NSString *m_phone;
    NSString *m_phoneLabel;
    NSString *m_email;
    NSString *m_nickname;
    NSString *m_nicknamePinYin;
    NSString *m_nicknamePinYinShort;
    UIImage *m_image;
}

@property(retain, nonatomic) UIImage *m_image; // @synthesize m_image;
@property(retain, nonatomic) NSString *m_nicknamePinYinShort; // @synthesize m_nicknamePinYinShort;
@property(retain, nonatomic) NSString *m_nicknamePinYin; // @synthesize m_nicknamePinYin;
@property(retain, nonatomic) NSString *m_nickname; // @synthesize m_nickname;
@property(retain, nonatomic) NSString *m_email; // @synthesize m_email;
@property(retain, nonatomic) NSString *m_phoneLabel; // @synthesize m_phoneLabel;
@property(retain, nonatomic) NSString *m_phone; // @synthesize m_phone;
- (void).cxx_destruct;
- (BOOL)copyFieldFromAddressBook:(id)arg1;
- (int)compareMMAddressBookAscending:(id)arg1;
- (id)description;

@end
