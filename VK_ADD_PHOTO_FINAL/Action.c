Action()
{
	lr_start_transaction("0_homepage");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='8c3d797b2437271115' 
Name ='ip_h' 
Type ='Rule' 
AppName ='VK' 
RuleName ='ip_h_1'*/
	web_reg_save_param_regexp(
		"ParamName=ip_h",
		"RegExp=ip_h: '(.*?)'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/vk.com/*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='96e015809a7b9a1df8' 
Name ='lg_h' 
Type ='Rule' 
AppName ='VK' 
RuleName ='value'*/
	web_reg_save_param_regexp(
		"ParamName=lg_h",
		"RegExp=name=\"lg_h\" value=\"(.*?)\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/vk.com/*",
		LAST);

	web_reg_find("Search=All","Text=Впервые ВКонтакте?",LAST);

	web_url("vk.com", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1581082030075\\\"\"},\"use_webpush\":true,\"uaid\":\"3b1f8a3d9e904c429c0dceb073704851\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	lr_end_transaction("0_homepage", LR_AUTO);
	

	lr_start_transaction("1_login");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"https://vk.com");

/*Correlation comment: Automatic rules - Do not change!  
Original value='8140717' 
Name ='ai_id' 
Type ='Rule' 
AppName ='VK' 
RuleName ='uid_1'*/
	web_reg_save_param_regexp(
		"ParamName=ai_id",
		"RegExp=\"uid\":\"(.*?)\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login.php*",
		LAST);

	web_submit_data("login.vk.com",
		"Action=https://login.vk.com/?act=login",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://vk.com/",
		"Snapshot=t69.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=login", ENDITEM,
		"Name=role", "Value=al_frame", ENDITEM,
		"Name=expire", "Value=", ENDITEM,
		"Name=recaptcha", "Value=", ENDITEM,
		"Name=captcha_sid", "Value=", ENDITEM,
		"Name=captcha_key", "Value=", ENDITEM,
		"Name=_origin", "Value=https://vk.com", ENDITEM,
		"Name=ip_h", "Value={ip_h}", ENDITEM,
		"Name=lg_h", "Value={lg_h}", ENDITEM,
		"Name=ul", "Value=", ENDITEM,
		"Name=email", "Value={Login}", ENDITEM,
		"Name=pass", "Value={Password}", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='a323bd381eaa360359' 
Name ='hash_1' 
Type ='Rule' 
AppName ='vk_expend' 
RuleName ='hash'*/
	web_reg_save_param_regexp(
		"ParamName=hash_1",
		"RegExp=logout&hash=(.+)&",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_reg_find("Search=All","Text=Что у Вас нового?",LAST);

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_feed.php", 
		"Action=https://vk.com/al_feed.php?queue", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_key", ENDITEM, 
		"Name=ads_section", "Value=false", ENDITEM, 
		"Name=ads_showed", "Value=", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=al_ad", "Value=1", ENDITEM, 
		"Name=need_ignore", "Value=1", ENDITEM, 
		"Name=only_update", "Value=0", ENDITEM, 
		"Name=section", "Value=news", ENDITEM, 
		"Name=subsection", "Value=top", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_im.php_2", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=get_promoted_stickers", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_3", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_im.php_4", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_fast_chat", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		LAST);


	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("notifier.php", 
		"Action=https://vk.com/notifier.php?act=a_reset", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	lr_end_transaction("1_login",LR_AUTO);
	
	
	lr_start_transaction("2_goto_album");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

/*Correlation comment: Automatic rules - Do not change!  
Original value='512214' 
Name ='server' 
Type ='Rule' 
AppName ='VK' 
RuleName ='server'*/
	web_reg_save_param_regexp(
		"ParamName=server",
		"RegExp=server: (.*?),",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/al_photos.php*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='e4ca130bfacb7195ad4ce6d5731f24d0' 
Name ='hash_2' 
Type ='Rule' 
AppName ='VK' 
RuleName ='error_hash'*/
	web_reg_save_param_regexp(
		"ParamName=hash_2",
		"RegExp=error_hash: \\'(.*?)\\'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/al_photos.php*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='1ca3c5e147031768f2' 
Name ='hash_4' 
Type ='Rule' 
AppName ='VK' 
RuleName ='Rule_13'*/
	web_reg_save_param_regexp(
		"ParamName=hash_4",
		"RegExp=statsPhotoAddHash: \\'(.*?)\\'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/al_photos.php*",
		LAST);

	web_url("al_photos.php",
		"URL=https://vk.com/al_photos.php?__query=albums{ai_id}&_ref=left_nav&_rndVer=73887&al=-1&al_id={ai_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/feed",
		"Snapshot=t110.inf",
		"Mode=HTML",
		LAST);

	lr_save_timestamp("CurrentTimestamp", LAST);
	
	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("ads_rotate.php_2",
		"Action=https://vk.com/ads_rotate.php?act=al_update_ad",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t116.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=ads_req_id", "Value={CurrentTimestamp}", ENDITEM,
		"Name=ads_section", "Value=photos", ENDITEM,
		"Name=ads_showed", "Value=6_2584999c,4_232fcc17,5_7a06e4a3", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=al_ad", "Value=1", ENDITEM,
		"Name=ignore_experiments", "Value=310000", ENDITEM,
		"Name=ya_ad_active", "Value=0", ENDITEM,
		LAST);


	web_add_auto_header("Origin", 
		"https://vk.com");
	
	web_reg_save_param_json(
        "ParamName=server_photo",
        "QueryString=$.payload.[1].[2].server",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");

	web_reg_save_param_json(
        "ParamName=hash_photo",
        "QueryString=$.payload.[1].[1].hash",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
	
	web_reg_save_param_json(
        "ParamName=rhash_photo",
        "QueryString=$.payload.[1].[1].rhash",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
		
	web_reg_save_param_json(
        "ParamName=error_hash",
        "QueryString=$['payload'][1][2]['error_hash']",
        SEARCH_FILTERS,
        "Scope=Body",
        "LAST");
		
	
	web_submit_data("upload_fails.php",
		"Action=https://vk.com/upload_fails.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t119.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=fail", ENDITEM,
		"Name=aid", "Value=-7", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=error", "Value=1", ENDITEM,
		"Name=gid", "Value=0", ENDITEM,
		"Name=hash", "Value={hash_2}", ENDITEM,
		"Name=mid", "Value={ai_id}", ENDITEM,
		"Name=oid", "Value={ai_id}", ENDITEM,
		"Name=role", "Value=photo", ENDITEM,
		"Name=server", "Value={server}", ENDITEM,
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("upload.php",
		"Action=https://pu.vk.com/c{server_photo}/upload.php",
		"Method=POST",
		"EncType=multipart/form-data",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://vk.com/",
		"Snapshot=t120.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=mid", "Value={ai_id}", ENDITEM,
		"Name=aid", "Value=-7", ENDITEM,
		"Name=gid", "Value=0", ENDITEM,
		"Name=hash", "Value={hash_photo}", ENDITEM,
		"Name=rhash", "Value={rhash_photo}", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=act", "Value=check_upload", ENDITEM,
		"Name=type", "Value=photo", ENDITEM,
		"Name=ondone", "Value=Upload.callbacks.oncheck0", ENDITEM,
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("upload_fails.php_2",
		"Action=https://vk.com/upload_fails.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t121.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=success", ENDITEM,
		"Name=aid", "Value=-7", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=error", "Value=1", ENDITEM,
		"Name=gid", "Value=0", ENDITEM,
		"Name=hash", "Value={error_hash}", ENDITEM,
		"Name=mid", "Value={ai_id}", ENDITEM,
		"Name=oid", "Value={ai_id}", ENDITEM,
		"Name=server", "Value={server_photo}", ENDITEM,
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_submit_data("al_photos.php_2",
		"Action=https://vk.com/al_photos.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t125.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=start_add", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=hash", "Value={hash_4}", ENDITEM,
		LAST);

	web_revert_auto_header("X-Requested-With");

	
	web_reg_find("Search=All","Text=Мои фотографии",LAST);

	
	web_url("albums8140717",
		"URL=https://vk.com/albums{ai_id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t126.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("2_goto_album",LR_AUTO);

	
	

	lr_start_transaction("3_add_photo");
	
	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_custom_request("upload.php_2",
		"URL=https://pu.vk.com/c{server_photo}/upload.php?act=do_add&aid=-7&ajx=1&gid=0&hash={hash_photo}&jpeg_quality=89&keep_meta=1&mid={ai_id}&oid={ai_id}&rhash={rhash_photo}",
		"Method=OPTIONS",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/",
		"Snapshot=t127.inf",
		"Mode=HTML",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='830a4ca05be64ae2c7b1cb18917e6ddd' 
Name ='hash_3' 
Type ='Rule' 
AppName ='VK' 
RuleName ='hash_json'*/
	web_reg_save_param_json(
		"ParamName=hash_3",
		"QueryString=$.hash",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	
	web_reg_save_param_json(
		"ParamName=photos",
		"QueryString=$.photos",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_submit_data("upload.php_3",
		"Action=https://pu.vk.com/c{server_photo}/upload.php?act=do_add&aid=-7&ajx=1&gid=0&hash={hash_photo}&jpeg_quality=89&keep_meta=1&mid={ai_id}&oid={ai_id}&rhash={rhash_photo}",
		"Method=POST",
		"EncType=multipart/form-data",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/",
		"Snapshot=t128.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=photo", "Value={filename}", "File=yes", ENDITEM,
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("upload_fails.php_3",
		"Action=https://vk.com/upload_fails.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t129.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=stat", ENDITEM,
		"Name=aid", "Value=-7", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=duration", "Value=3770", ENDITEM,
		"Name=error", "Value=1", ENDITEM,
		"Name=gid", "Value=0", ENDITEM,
		"Name=hash", "Value={error_hash}", ENDITEM,
		"Name=mid", "Value={ai_id}", ENDITEM,
		"Name=oid", "Value={ai_id}", ENDITEM,
		"Name=server", "Value={server_photo}", ENDITEM,
		"Name=total_size", "Value=2100871", ENDITEM,
		"Name=type", "Value=photo", ENDITEM,
		LAST);

	web_reg_find("Search=All","Text=Добавьте описание…",LAST);

	
	web_submit_data("al_photos.php_3",
		"Action=https://vk.com/al_photos.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://vk.com/albums{ai_id}",
		"Snapshot=t130.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=done_add", ENDITEM,
		"Name=aid", "Value=-7", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=context", "Value=1", ENDITEM,
		"Name=from", "Value=html5", ENDITEM,
		"Name=geo", "Value=1", ENDITEM,
		"Name=gid", "Value=0", ENDITEM,
		"Name=hash", "Value={hash_3}", ENDITEM,
		"Name=mid", "Value={ai_id}", ENDITEM,
		"Name=photos", "Value={photos}", ENDITEM,
		"Name=server", "Value={server_photo}", ENDITEM,
		LAST);

	lr_end_transaction("3_add_photo", LR_AUTO);

	
	

	lr_start_transaction("3_logout");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", "1");
	

	web_reg_find("Search=All","Text=Впервые ВКонтакте?",LAST);

	
	web_url("login.vk.com_2",
		"URL=https://login.vk.com/?act=logout&hash={hash_1}&reason=tn&_origin=https://vk.com",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/",
		"Snapshot=t140.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("3_logout",LR_AUTO);

	return 0;
}