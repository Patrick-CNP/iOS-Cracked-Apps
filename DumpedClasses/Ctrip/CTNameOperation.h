//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTPassengerNode, NSString, UITextField;

@interface CTNameOperation : NSObject
{
    CTPassengerNode *_pNode;
    NSString *_firstName;
    UITextField *_firstNameInput;
    NSString *_lastName;
    UITextField *_lastNameInput;
    NSString *_middleName;
    NSString *_cnName;
    UITextField *_cnNameInput;
}

@property(retain, nonatomic) UITextField *cnNameInput; // @synthesize cnNameInput=_cnNameInput;
@property(copy, nonatomic) NSString *cnName; // @synthesize cnName=_cnName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) UITextField *lastNameInput; // @synthesize lastNameInput=_lastNameInput;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) UITextField *firstNameInput; // @synthesize firstNameInput=_firstNameInput;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CTPassengerNode *pNode; // @synthesize pNode=_pNode;
- (void).cxx_destruct;
- (_Bool)validateValue:(id)arg1 andOldValue:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

