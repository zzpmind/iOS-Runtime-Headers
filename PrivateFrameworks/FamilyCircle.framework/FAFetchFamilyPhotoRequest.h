/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFetchFamilyPhotoRequest : FAFamilyCircleRequest {
    NSString *_emailAddress;
    NSString *_fullname;
    BOOL _localFallback;
    NSNumber *_memberDSID;
    NSString *_memberHashedDSID;
    double _monogramDiameter;
    int _monogramStyle;
    NSString *_phoneNumber;
    unsigned int _requestedSize;
    double _requiredHeight;
    double _requiredWidth;
    BOOL _useMonogramAsLastResort;
}

@property (copy) NSString *emailAddress;
@property (copy) NSString *fullname;
@property (readonly) BOOL localFallback;
@property (readonly, copy) NSNumber *memberDSID;
@property (readonly, copy) NSString *memberHashedDSID;
@property double monogramDiameter;
@property int monogramStyle;
@property (copy) NSString *phoneNumber;
@property (readonly) unsigned int requestedSize;
@property double requiredHeight;
@property double requiredWidth;
@property BOOL useMonogramAsLastResort;

- (void).cxx_destruct;
- (id)emailAddress;
- (id)fullname;
- (id)init;
- (id)initWithFamilyMemberDSID:(id)arg1 size:(unsigned int)arg2 localFallback:(BOOL)arg3;
- (id)initWithFamilyMemberHashedDSID:(id)arg1 size:(unsigned int)arg2 localFallback:(BOOL)arg3;
- (BOOL)localFallback;
- (id)memberDSID;
- (id)memberHashedDSID;
- (double)monogramDiameter;
- (int)monogramStyle;
- (id)phoneNumber;
- (id)requestOptions;
- (unsigned int)requestedSize;
- (double)requiredHeight;
- (double)requiredWidth;
- (void)setEmailAddress:(id)arg1;
- (void)setFullname:(id)arg1;
- (void)setMonogramDiameter:(double)arg1;
- (void)setMonogramStyle:(int)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRequiredHeight:(double)arg1;
- (void)setRequiredWidth:(double)arg1;
- (void)setUseMonogramAsLastResort:(BOOL)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;
- (BOOL)useMonogramAsLastResort;

@end
