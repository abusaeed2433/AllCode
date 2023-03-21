

export const deletePhoto = functions.database.ref('notice/{cc}/{title}')
  .onDelete((change, context) => {

    if(!change.after.exists()){ //delete file from storage

      var class_code = String(cc);
      var ttl = String(title);
      var uid = String(change.before.value.uid);
      console.log("%s - %s - %",class_code,ttl,uid);
      return true;
    }
    return null;
});

export const addUserID = functions.database.ref('notice/{cc}/{title}')
  .onCreate((change, context) => {

    if(change.after.exists()){ //add uid
      const ref = snapshot.ref;
      return ref.update({ "uid": context.auth.uid });
    }
    else{
     return null;
    }
});
